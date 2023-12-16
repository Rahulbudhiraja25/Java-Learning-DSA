import java.util.*;
public class Collection_Iterator {
    public static void main(String args[]){
        // Array List is a collection of ordered Set of Unsorted Elements We can use Index Values to retrive elements 
        List<Integer> Rahul=new ArrayList<Integer>();
        Rahul.add(5);
        Rahul.add(55);
        Rahul.add(35);
        Rahul.add(65);
        Rahul.add(85);

        // Set doesnot have unique Values
        // Set is a collection of Unordered Set Of Unique Elements TreeSet is a type of Set That stores data in a sorted Form
        Set <Integer> Rahul2=new TreeSet<Integer>();
        Rahul2.add(5);
        Rahul2.add(65);
        Rahul2.add(95);
        Rahul2.add(35);
        Rahul2.add(45);
        Rahul2.add(25);

         // Set is a collection of Unordered Set Of Unique Elements HashSet is a type of Set That stores data in a Unsorted Form

        Set <Integer> Rahul3=new HashSet<Integer>();
        Rahul3.add(5);
        Rahul3.add(65);
        Rahul3.add(95);
        Rahul3.add(35);
        Rahul3.add(45);
        Rahul3.add(25);

        //There is an Iterator Class available that is used to access the Elements from collection interface 

        Iterator<Integer> value=Rahul.iterator();
        Iterator<Integer> values=Rahul2.iterator();
        Iterator<Integer> valuess=Rahul3.iterator();

        while(value.hasNext())
        System.out.println(value.next());

        System.out.println();

        while(values.hasNext())
        System.out.println(values.next());

        System.out.println();

          while(valuess.hasNext())
        System.out.println(valuess.next());

    }
}
