/*
The static keyword in Java is used for memory management mainly.
 We can apply static keyword with variables, methods, blocks and nested classes. 
 The static keyword belongs to the class than an instance of the class.

The static can be:---
Variable (also known as a class variable)
Method (also known as a class method)
Block
Nested class

*/


// Java program to demonstrate that a static member
// can be accessed before instantiating a class
class StaticDemo{

    //static method
    static void demo(){
        System.out.println("Static!!");
    }

    // calling m1 without creating
    // any object of class Test
    public static void main(String[] args){
        demo();
        
    }
}