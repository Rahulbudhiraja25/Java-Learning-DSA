public class Selection_sort {
    public static void main(String args[]){
        int arr[] = { 55, 85, 5, 10, 2, 65 };

        sortArr(arr);

        for (int i : arr) {
            System.out.print(i + ",");
        }
    }

public static int[] sortArr(int[] arr) {
    for(int i = 0; i < arr.length - 1; i++) {
        for(int j = 0; j < arr.length - 1 - i; j++) {
         int max=arr.length-1;
         if(arr[i]>arr[max]){
            max=arr[i];
         }
         int temp = arr[max];
         arr[j+1] = arr[j];
         arr[j] = temp;
        }
    }
    return arr;
    }
}
