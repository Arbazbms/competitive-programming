// Java program for Method overriding
/*
2. Runtime polymorphism: It is also known as Dynamic Method Dispatch. 
It is a process in which a function call to the overridden method is 
resolved at Runtime. This type of polymorphism is achieved by Method Overriding.
Method overriding, on the other hand, occurs when a derived class 
has a definition for one of the member functions of the base class.
 That base function is said to be overridden.


*/
class Parent {

	void Print()
	{
		System.out.println("parent class");
	}
}

class subclass1 extends Parent {

	void Print()
	{
		System.out.println("subclass1");
	}
}

class subclass2 extends Parent {

	void Print()
	{
		System.out.println("subclass2");
	}
}

class TestPolymorphism3 {
	public static void main(String[] args)
	{

		Parent a;

		a = new subclass1();
		a.Print();

		a = new subclass2();
		a.Print();
	}
}
