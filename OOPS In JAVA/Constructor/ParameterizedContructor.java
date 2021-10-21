//Java Program to demonstrate the use of the parameterized constructor.  
class ParameterizedContructor{  
    int id;  
    String name;  
    //creating a parameterized constructor  
    ParameterizedContructor(int i,String n){  
    id = i;  
    name = n;  
    }  
    //method to display the values  
    void display(){System.out.println(id+" "+name);}  
   
    public static void main(String args[]){  
    //creating objects and passing values  
    ParameterizedContructor s1 = new ParameterizedContructor(111,"Karan");  
    ParameterizedContructor s2 = new ParameterizedContructor(222,"Aryan");  
    //calling method to display the values of object  
    s1.display();  
    s2.display();  
   }  
}  