// Java program to illustrate the
// concept of single inheritance

/*
1. Single Inheritance: In single inheritance, 
subclasses inherit the features of one superclass. 
In the image below, class A serves as a base class for the derived class B.
*/
import java.io.*;
import java.lang.*;
import java.util.*;

class one {
	public void print_geek()
	{
		System.out.println("Geeks");
	}
}

class two extends one {
	public void print_for() { System.out.println("for"); }
}
// Driver class
public class SingleIneritance
 {
	public static void main(String[] args)
	{
		two g = new two();
		g.print_geek();
		g.print_for();
		g.print_geek();
	}
}
