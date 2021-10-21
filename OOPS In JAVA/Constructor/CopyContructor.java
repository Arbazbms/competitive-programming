
/*
There is no copy constructor in Java. However, we can copy the values from one object to another like copy constructor in C++.

There are many ways to copy the values of one object into another in Java. They are:

By constructor
By assigning the values of one object into another
By clone() method of Object class
*/
//Java program to initialize the values from one object to another object.  

// LINK: REFER README JAVAPOINT CONSTRUCTOR LINK
class CopyContructor{  
    int id;  
    String name;  
    //constructor to initialize integer and string  
    CopyContructor(int i,String n){  
    id = i;  
    name = n;  
    }  
    //constructor to initialize another object  
    CopyContructor(Student6 s){  
    id = s.id;  
    name =s.name;  
    }  
    void display(){System.out.println(id+" "+name);}  
   
    public static void main(String args[]){  
    CopyContructor s1 = new CopyContructor(111,"Karan");  
    CopyContructor s2 = new CopyContructor(s1);  
    s1.display();  
    s2.display();  
   }  
}  
/*
//Copying values without constructor
class Student7{  
    int id;  
    String name;  
    Student7(int i,String n){  
    id = i;  
    name = n;  
    }  
    Student7(){}  
    void display(){System.out.println(id+" "+name);}  
   
    public static void main(String args[]){  
    Student7 s1 = new Student7(111,"Karan");  
    Student7 s2 = new Student7();  
    s2.id=s1.id;  
    s2.name=s1.name;  
    s1.display();  
    s2.display();  
   }  
}  
*/