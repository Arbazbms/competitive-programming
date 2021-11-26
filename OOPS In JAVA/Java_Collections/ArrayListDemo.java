import java.util.*;

class ArrayListDemo{
    public static void main(String args[]){
        int n = 5;

        ArrayList<Integer> al = new ArrayList<Integer>(n);

        for(int i =0; i<n;i++){
            al.add(i);
        }

        for(int e : al){
            System.out.print(e + " ");
        }

        // Remove element at index 3
        al.remove(3);
 

        // changing element index 1 to value 7
        al.set(1, 7);

        //printing specific element (printing index 2 element)
        System.out.println(" Index 2 element: "+al.get(2));


        // Using the Get method and the
        // for loop
        for (int i = 0; i < al.size(); i++) {
 
            System.out.print(al.get(i) + " ");
        }
    }
}