/*
NOTE : 1) Java static variable
If you declare any variable as static, it is known as a static variable.

**> The static variable can be used to refer to the common property of all objects 
(which is not unique for each object), for example, the company name of employees,
 college name of students, etc.


**> The static variable gets memory only once in the class area at the
 time of class loading.

**> Advantages of static variable
It makes your program memory efficient (i.e., it saves memory).

NOTE : IMPORTANT EXPLANATION BELOW 
Suppose there are 500 students in my college, 
now all instance data members will get memory each time when the object is created.
 All students have its unique rollno and name, so instance data member is good in such case.
  Here, "college" refers to the common property of all objects. If we make it static, 
  this field will get the MEMORY ONLY ONCE

*/

/*
NOTE 2) Java static method
If you apply static keyword with any method, it is known as static method.

A static method belongs to the class rather than the object of a class.
A static method can be invoked without the need for creating an instance of a class.
A static method can access static data member and can change the value of it.
*/
class Student{
    int rollNo;
    String Name;
    static String CollegeName = "BMSCE"; // witout Static if N object -> N CollegeName Instaces will be created in a memory so make it static
    

    Student(int r, String n){
        rollNo = r;
        Name = n;
    }

     //static method to change the value of static variable  
     static void change(){  
     CollegeName = "TCOE";  
     }  

    void display(){
        System.out.println("Name: " + Name + " RollNo: " + rollNo + " College Name: " + CollegeName);

    }

}


class MemoryEfficientStaticDemo{

    public static void main(String args[]){
        Student.change();//calling change Static method  
        Student s1 = new Student(100, "Arbaz");
        Student s2 = new Student(101, "Saif");
        s1.display();
        s2.display();
    }
}