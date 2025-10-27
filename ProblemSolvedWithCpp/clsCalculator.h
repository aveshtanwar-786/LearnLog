class Calculator
{
public:
    int Add(int FirstNumber, int SecondNumber)
    {
        if (FirstNumber < 0 || SecondNumber < 0)
            return 0;

        int result = FirstNumber + SecondNumber;
        return result;
    }

    int Subrtact(int FirstNumber, int SecondNumber)
    {
        int result = FirstNumber - SecondNumber;
        return result;
    }
};
