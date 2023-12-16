// This is a non working swap because changes are affected to local variable

import java.util.*;
public class Array_Swap_1 {
    public static void main(String args[]) {
        
        Scanner Scan=new Scanner(System.in);
        int []arr=new int[5];
        // char []arr1=new char[5];
        int n,k;
        arr[0] = 5;
        arr[1] = 10;
        arr[2] = 40;
        arr[3] = 34;
        arr[4] = 24;
        
        System.out.println("Enter the index of numbers you want to swap in array");
        System.out.println("Enter the index of 1st var");
        n=Scan.nextInt();
        System.out.println("Enter the index of 2nd Var");
        k=Scan.nextInt();
        System.out.println();
        System.out.println("Before Swap var is ist--> "+arr[n]+" 2nd --> "+arr[k]);
        Swap(n, k);
        // System.out.println();
        System.out.println("After Swap var is ist--> "+arr[n]+" 2nd --> "+arr[k]);
      Scan.close();  
    }
    public static void Swap(int one ,int two){
        int temp=one;
        one=two;
        two=temp;
    }
    
}
