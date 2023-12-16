// import java.util.Scanner;

// public static void main(String args[]) {
//     int farhenight;
//     Scanner s1 = new Scanner(System.in);
//     farhenight = s1.nextInt();
//     int celcius = (int) ((5.0 / 9) * (farhenight - 32));
//     System.out.println(celcius);
//     s1.close();
// }
// }

import java.util.*;

public class Farehenight_to_celciu {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int num = 1;
        int sp = n + 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= num; j++) {
                System.out.print(j + " ");
            }
            for (int j = 1; j <= sp; j++) {
                System.out.print("  ");
            }
            for (int j = i; j >= 1; j--) {
                if (i == n&&j==i) {
                    System.out.print("");
                } else {
                    System.out.print(j + " ");

                }
            }
            System.out.println();
            num++;
            sp = sp - 2;

        }
        s1.close();
    }
}

// public class Farehenight_to_celciu {