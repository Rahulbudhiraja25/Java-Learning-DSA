// import java.util.Arrays;
// import java.lang.Math;
import java.util.Arrays;
import java.util.Scanner;

import javax.swing.plaf.synth.SynthStyle;
public class Core_Java{
    public static void main(String args[]){

        // Printing a messge("Hello World ") in Java
        // {
        // System.out.println("Hello World");
        // }

        // Variables in java
        // INT,Char,Float,Double,Long,Boolean,Short(Primitive Datatypes)
        // Array,String(Non-Primitive based on primitive ,Created using 'new' Keyword in java)
        // New Keyword in Java is used to create an object of class in java

        // String Manipulation Functions 
        // Strings are immutable in java 
        // {
        // String s1=new String("Rahul and Rahul Budhiraja");
        // String s2=s1.replace('A', 'B');
        // int len=s1.length();
        // String s2=s1.substring(0,5);
        // System.out.println(s1.length());
        // System.out.println(s2);


        // Arrays in java

//         int[] Array=new int [3];
//         Array[0]=5;
//         Array[1]=9;
//         Array[2]=2;

//         System.out.print(Array[0]);
//         System.out.print(Array[1]);
//         System.out.print(Array[2]);
//          System.out.println();
//         System.out.println(Array.length);
//         Arrays.sort(Array);
        
//         System.out.print(Array[0]);
//         System.out.print(Array[1]);
//         System.out.print(Array[2]);


        // Another Way of initilizing array
        // int [] Array2={55,65,85};
        // }

        // 2D Arrays
        // int Array [][]=new int[2][2];

        // Array[0][0]=55;
        // Array[0][1]=65;
        // Array[1][0]=85;
        // Array[1][1]=95;


        // for(int arr[] : Array){
        //     for(int a :arr){
        //         System.out.println(a);
        //     }
        // }

            // System.out.println((int)(Math.random()*100));

// Taking Input In Java
            // String n;
            // Scanner s1=new Scanner(System.in);
            // n=s1.nextLine();
            // System.out.tprintln(n);

// Lamda Experssion in java 
        int[] arr={5,6,7,9,8};

        Arrays.stream(arr).forEach( arra->System.out.println(arra));
        
    }
}