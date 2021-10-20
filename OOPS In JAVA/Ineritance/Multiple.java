/*

4. Multiple Inheritance (Through Interfaces): In Multiple inheritances,
 one class can have more than one superclass and inherit features 
 from all parent classes. Please note that Java does not support
  multiple inheritances with classes. In java, we can achieve multiple 
inheritances only through Interfaces. In the image below, 
Class C is derived from interface A and B.
*/
// Java program to illustrate the
// concept of Multiple inheritance
import java.io.*;
import java.lang.*;
import java.util.*;

interface one {
	public void print_geek();
}

interface two {
	public void print_for();
}

interface three extends one, two {
	public void print_geek();
}
class child implements three {
	@Override public void print_geek()
	{
		System.out.println("Geeks");
	}

	public void print_for() { System.out.println("for"); }
}

// Drived class
public class Main {
	public static void main(String[] args)
	{
		child c = new child();
		c.print_geek();
		c.print_for();
		c.print_geek();
	}
}
