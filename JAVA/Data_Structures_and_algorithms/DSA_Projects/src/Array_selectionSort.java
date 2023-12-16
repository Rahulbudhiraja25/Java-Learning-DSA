public class Array_selectionSort {
    public static void main(String args[]) {
        int[] arr = { 2, 84, 66, 12, 88, 99, 40, 15, 13, 75, 65 };

        for (int counter = 0; counter < arr.length; counter++) {
            int min = counter;
            for (int j = counter + 1; j < arr.length - 1; j++) {

                if (arr[min] > arr[j]) {
                    min = j;
                }

            }
            int temp = arr[min];
            arr[min] = arr[counter];
            arr[counter] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

// ALternative Method

// public class Array_selectionSort {
// public static void main(String args[]) {
// int[] arr = { 2, 84, 66, 12, 88, 99, 40, 15, 13, 75, 65 };

// for (int counter = 0; counter < arr.length; counter++) {
// for (int j = 0; j < arr.length-1 ; j++) {

// if(arr[counter]<arr[j]){
// int temp=arr[counter];
// arr[counter]=arr[j];
// arr[j]=temp;
// }

// }
// }
// for(int i=0;i<arr.length;i++){
// System.out.print(arr[i]+" ");
// }
// }
// }
