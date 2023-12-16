// This won't work because once the swap fnction perform its work it will be popped off without reflecting its changes so all the pointers are also popped off
import java.util.*;
public class Array_Swap_3 {
    public static void main(String args[]) {
        
        Scanner Scan=new Scanner(System.in);
        int []arr=new int[5];
        // char []arr1=new char[5];
        // int n,k;
        arr[0] = 5;
        arr[1] = 10;
        arr[2] = 40;
        arr[3] = 34;
        arr[4] = 24;

        int []other={200,300,400};
        
        // System.out.println("Enter the index of numbers you want to swap in array");
        // System.out.println("Enter the index of 1st var");
        // n=Scan.nextInt();
        // System.out.println("Enter the index of 2nd Var");
        // k=Scan.nextInt();
        // System.out.println();
        System.out.println("Before Swap var is ist--> "+arr[0]+" 2nd --> "+other[0]);
        Swap(arr,other);
        // System.out.println();
        System.out.println("After Swap var is ist--> "+arr[0]+" 2nd --> "+other[0]);
      Scan.close();  
    }
    public static void Swap(int [] one ,int [] two){
        int [] temp=one;
        one=two;
        two=temp;
    }
    
}
