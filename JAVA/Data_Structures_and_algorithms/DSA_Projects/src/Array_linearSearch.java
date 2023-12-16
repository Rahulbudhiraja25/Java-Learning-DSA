import java.util.*;

public class Array_linearSearch {
    public static void main(String args[]) {
        int[] arr = { 20, 35, 45, 65, 55, 44 };
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter the element you want to search in array");
        int n = s1.nextInt();
     
        int num=linearSearch(arr, n);
        System.out.println("The element is present in the array at index : " + num);

        
        // if (index != -1) {
        //     System.out.println("The element is present in the array at index : " + index);
        // } else {
        //     System.out.println("The element is not present in the array");
        // }

        s1.close();
    }

    public static int linearSearch(int[] array, int num) {
        
        int index = -1;
        for (int i = 0; i < array.length; i++) {
            if (array[i] == num) {
                index = i;
                break;
            }

        }
        return index;
    }
}

// Worst Case complexity will be O(n) as N comparisons are made in worst case