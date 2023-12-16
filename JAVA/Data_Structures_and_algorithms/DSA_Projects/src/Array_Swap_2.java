// This function works because referance is passed with the index
// Changes are made in Heap and the Changes made in heap will persist throut the program and changes made in Stack will not persist throught the program the changes are for particular stack block or for a single function
import java.util.*;
public class Array_Swap_2 {
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
        Swap(arr,n, k);
        // System.out.println();
        System.out.println("After Swap var is ist--> "+arr[n]+" 2nd --> "+arr[k]);
      Scan.close();  
    }
    public static void Swap(int[]arr,int one ,int two){
        int temp=arr[one];
        arr[one]=arr[two];
        arr[two]=temp;
    }
    
}
