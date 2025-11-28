interface My {
public void mango();
public void grapes();
public void apple();
}

class Me implements My{
public void mango(){
System.out.println("Mango");
}

public void grapes(){
System.out.println("Grapes");
}

public void apple(){
System.out.println("Apple");
}
}

class Demo {
public static void main(String []args){
Me m = new Me();
m.mango();
m.grapes();
m.apple();
}
}