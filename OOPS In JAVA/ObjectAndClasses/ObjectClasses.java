class Person{

    String name;
    int age;

    Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    void Display(){
        System.out.println("Name: " + name + " Age: " + age);
    }
}

class ObjectClasses{
    public static void main(String args[]){
        Person p1 = new Person("Arbaz",22);
        p1.Display();

        Person p2 = new Person("jon",22);
        p2.Display();
    }
}