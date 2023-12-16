import java.util.*;
public class PatterndoubleArrow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // first half of diamond
        for (int i = 0; i < n / 2; i++) {
            // Spaces (n-2*i)
            for (int j = 1; j < n - 2 * i; j++) {
                System.out.print("  ");
            }

            // print numbers from i+1 to 1 (dec)
            for (int j = i + 1; j > 0; j--) {
                System.out.print(j + " ");
            }

            // print spaces 2*i-1
            for (int j = 0; j < 2 * i - 1; j++) {
                System.out.print("  ");
            }

            // print numbers from 1 to i+1 (make sure that if i=0 then don't print 1)
            for (int j = 1; i > 0 && j <= i + 1; j++) {
                System.out.print(j + " ");
            }

            System.out.println();
        }

        // second half of diamond
        for (int i = n / 2; i >= 0; i--) {
            // Spaces (n-2*i)
            for (int j = 1; j < n - 2 * i; j++) {
                System.out.print("  ");
            }

            // print numbers from i+1 to 1 (dec)
            for (int j = i + 1; j > 0; j--) {
                System.out.print(j + " ");
            }

            // print spaces 2*i-1
            for (int j = 0; j < 2 * i - 1; j++) {
                System.out.print("  ");
            }

            // print numbers from 1 to i+1 (make sure that if i=0 then don't print 1)
            for (int j = 1; i > 0 && j <= i + 1; j++) {
                System.out.print(j + " ");
            }

            System.out.println();
        }
    }
}