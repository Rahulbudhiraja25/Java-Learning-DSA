// PreRequirement of Binary Search is the array must be sorted 

import java.util.*;

public class Array_binarySearch {
    public static void main(String args[]) {
        Scanner s1 = new Scanner(System.in);
        int[] arr = { 2, 3, 4, 8, 9, 12, 14, 16, 20, 22, 24, 26, 33, 38, 39, 40, 50, 55 };
        int n;
        System.out.println("Enter the number you want to search");
        n = s1.nextInt();

        int num = binarySearch(n, arr);
        System.out.println(num);
        s1.close();
    }

    public static int binarySearch(int n, int[] arr) {
        int num = -1;
        int hi = arr.length - 1, lo = 0, mid;
        // if (n > hi || n < lo) {
        //     return num;
        // }
        for (int i = 0; i < arr.length; i++) {
            mid = (lo + hi) / 2;
            if (arr[mid] == n) {
                return mid;
            } else if (arr[mid] > n) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }

        return num;
    }
}
