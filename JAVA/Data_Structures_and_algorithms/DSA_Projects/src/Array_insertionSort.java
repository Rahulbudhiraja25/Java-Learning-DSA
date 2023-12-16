// public class Array_insertionSort {
//     public static void main(String args[]){
//         int[] arr = { 2, 84, 66, 12, 88, 99, 40, 15, 13, 75, 65 };

//         for(int counter=1;counter<arr.length;counter++){
//             for(int j=counter-1;j>=0;j--){
//                 if(arr[counter]<arr[j]){
//                     int temp=arr[counter];
//                     arr[counter]=arr[j];
//                     arr[j]=temp;
//                 }
//             }

//         }
//         for (int i = 0; i < arr.length; i++) {
//             System.out.print(arr[i] + " ");
//         }
//     }
// }


public class Array_insertionSort {
    public static void main(String args[]) {
        int[] arr = { 2, 84, 66, 12, 88, 99, 40, 15, 13, 75, 65 };

        for (int counter = 1; counter < arr.length; counter++) {
            int temp = arr[counter];
            int j = counter - 1;
            
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            
            arr[j + 1] = temp;
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
