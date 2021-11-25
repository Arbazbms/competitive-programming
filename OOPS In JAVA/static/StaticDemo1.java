//accessing static metods from anaoter class troug main metods by className.FunctionName()
class Demo{

    static void print(){
        System.out.println("From Print()");
    }
}

class StaticDemo1{

    public static void main(String[] args){
        Demo.print();
    }
}