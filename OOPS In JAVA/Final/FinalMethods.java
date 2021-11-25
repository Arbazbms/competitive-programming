/*
When a method is declared with final keyword, it is called a final method.
 A final method cannot be overridden. The Object class does this—a number of its
  methods are final. We must declare methods with the final keyword for which we 
  are required to follow the same implementation throughout all the derived classes. 

*/


class A 
{
    final void m1() 
    {
        System.out.println("This is a final method.");
    }
}

class B extends A 
{
    void m1()
    { 
        // Compile-error! We can not override
        System.out.println("Illegal!");
    }
}
 class FinalMethods {
    public static void main(String[] args){
        B obj = new B();
        obj.m1();
    }
}
/* NOTE: OUTPUT
FinalMethods.java:19: error: m1() in B cannot override m1() in A
    void m1()
         ^
  overridden method is final
1 error
*/