
//Java Program to create and call a default constructor  
class DefaultContructor{  
//creating a default constructor  
defaultContructor(){
    System.out.println("Bike is created");
}  
//main method  
public static void main(String args[]){  
//calling a default constructor  
DefaultContructor b=new DefaultContructor();  
}  
}  

/*
//Let us see another example of default constructor  
//which displays the default values  
class Student3{  
int id;  
String name;  
//method to display the value of id and name  
void display(){System.out.println(id+" "+name);}  
  
public static void main(String args[]){  
//creating objects  
Student3 s1=new Student3();  
Student3 s2=new Student3();  
//displaying values of the object  
s1.display();  
s2.display();  
}  
}  
*/
/* Rule: If there is no constructor in a class, compiler automatically creates a default constructor.*/
/*

Q) What is the purpose of a default constructor?
The default constructor is used 
to provide the default values to the object like 0, null, etc., 
depending on the type.

*/