
require('dotenv').config();
const express = require('express');
const cors = require('cors');
const { Pool } = require('pg');
const app = express();
app.use(cors());
app.use(express.json());
app.use(express.urlencoded({ extended: true }));
const bcrypt = require('bcrypt');
const pool = new Pool({
  connectionString: process.env.DATABASE_URL,
  ssl: { rejectUnauthorized: false }
});
(async () => {
  try {
    await pool.query(`
      CREATE TABLE IF NOT EXISTS users (
        id SERIAL PRIMARY KEY,
        name VARCHAR(100),
        email VARCHAR(100)
      );
    `);
    await pool.query(`
      CREATE TABLE IF NOT EXISTS registrations (
        id SERIAL PRIMARY KEY,
        fullname VARCHAR(100) NOT NULL,
        username VARCHAR(50) UNIQUE NOT NULL,
        password VARCHAR(100) NOT NULL,
        email VARCHAR(100) UNIQUE NOT NULL
      );
    `);
    console.log("✅ Tables ensured in database");
  } catch (err) {
    console.error("❌ Error creating tables:", err);
  }
})();
app.get('/api/users', async (req, res) => {
  try {
    const result = await pool.query('SELECT * FROM users');
    res.json(result.rows);
  } catch (err) {
    console.error(err);
    res.status(500).send('DB error');
  }
});
app.post('/api/users', async (req, res) => {
  const { name, email } = req.body;
  try {
    const result = await pool.query(
      'INSERT INTO users (name, email) VALUES ($1, $2) RETURNING *',
      [name, email]
    );
    res.json(result.rows[0]);
  } catch (err) {
    console.error(err);
    res.status(500).send('DB error');
  }
});
app.get('/api/registrations', async (req, res) => {
  try {
    const { rows } = await pool.query('SELECT * FROM registrations ORDER BY id DESC');
    res.status(200).json(rows);
  } catch (err) {
    console.error("Error fetching registrations:", err.message);
    res.status(500).json({ error: 'Database error while fetching registrations.' });
  }
});
app.post('/api/registrations', async (req, res) => {
  const { fullname, username, password, email } = req.body;
  if (!fullname || !username || !password || !email) {
    return res.status(400).json({ error: 'All fields are required.' });
  }
  try {
    const hashedPassword = await bcrypt.hash(password, 10);
    const insertQuery = `
      INSERT INTO registrations (fullname, username, password, email)
      VALUES ($1, $2, $3, $4)
      RETURNING id, fullname, username, email, created_at
    `;
    const { rows } = await pool.query(insertQuery, [
      fullname,
      username,
      hashedPassword,
      email
    ]);
    res.status(201).json({ message: 'Registration successful.', user: rows[0] });
  } catch (err) {
    console.error("Error saving registration:", err.message);
    res.status(500).json({ error: 'Database error while saving registration.' });
  }
});
app.use(express.static('public'));
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`🚀 Server running at http://localhost:${PORT}`);
});