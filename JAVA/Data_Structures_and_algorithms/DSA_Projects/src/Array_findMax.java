import java.util.Scanner;

public class Array_findMax {
    public static void main(String ars[]) {
        int n;
        int max = Integer.MIN_VALUE;
        int index = 0;

        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter the size of array");
        n = s1.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the variable [" + (i + 1) + "]");
            arr[i] = s1.nextInt();
        }

        for (int i : arr) {
            System.out.println("The variable at index [" + index + "] is " + i);
            index++;
        }
        System.out.println();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        System.out.println("Max in array is: " + max);
        s1.close();
    }
}
