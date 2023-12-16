// import java.util.*;
public class Array_bubbleSort {
    public static void main(String args[]){
        int [] arr={20,45,12,88,55,14,63,2,15,6};
        // int counter=0;
        // int j=0;
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        for(int counter=0;counter<arr.length-1;counter++){
            for(int j=0;j<arr.length-1-counter;j++){
                if(arr[j]>arr[j+1]){

                    // Swapping method 1(With temporary Variable)
                    // int temp=arr[j];
                    // arr[j]=arr[j+1];
                    // arr[j+1]=temp;
                    
                    // Swapping method 2(Without temporary variable)
                    // arr[j]=arr[j]*arr[j+1];
                    // arr[j+1]=arr[j]/arr[j+1];
                    // arr[j]=arr[j]/arr[j+1];

                    // Swapping method 3(Without temporary variable)
                    arr[j]=arr[j]+arr[j+1];
                    arr[j+1]=arr[j]-arr[j+1];
                    arr[j]=arr[j]-arr[j+1];
                    
                }
            }
        }

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();

    }
}
