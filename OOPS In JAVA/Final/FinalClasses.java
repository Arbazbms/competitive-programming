/*
NOTE: Usage 1: One is definitely to prevent inheritance, as final classes cannot be extended.
For example, all Wrapper Classes like Integer, Float, etc. are final classes. 
We can not extend them.


NOTE Usage 2: The other use of final with classes is to create an immutable class 
like the predefined String class. One can not make a class immutable without 
making it final.
*/



// Program gives Error as Final classes cannot be inerited

final class A
{
    void M1(){
        System.out.println("From M1");
    }
}
// The following class is illegal
class B extends A 
{ 
   void M2(){
        System.out.println("From M2");
    }

}
class FinalClasses {
    public static void main(String[] args){
        B obj = new B();
        obj.M2();
    }
}
/* NOTE:  OUTPUT
FinalClasses.java:23: error: cannot inherit from final A
class B extends A
                ^
1 error
*/