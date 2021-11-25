/*
If you need to do computation in order to initialize your static variables,
 you can declare a static block that gets executed exactly once, when the class is 
 first loaded
*/

// java program to demonstrate execution
// of static blocks and variables
class StaticBlock
{
	// static variable
	static int a = m1();
	
	// static block
	static {
		System.out.println("Inside static block");
	}
	
	// static method
	static int m1() {
		System.out.println("from m1");
		return 20;
	}
	
	// static method(main !!)
	public static void main(String[] args)
	{
	System.out.println("Value of a : "+a);
	System.out.println("from main");
	}


}
