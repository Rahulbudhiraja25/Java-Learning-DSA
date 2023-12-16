// import java.util.Scanner;

import java.util.Scanner;

public class Pattern3 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int tempn=n;
        for (int i = 1; i <= n; i++) {
            for (int j = tempn; j >= 1; j--) {
                System.out.print("* ");

            }
            tempn--;
            System.out.println();
        }
        s1.close();
    }
}












// public class Pattern3 {
//     public static void main(String[] args) {
//         int n;
//         Scanner s1 = new Scanner(System.in);
//         n = s1.nextInt();

//         for (int i = 0; i < n; i++) {
//             for (int j = n - i; j >= 1; j--) {
//                 System.out.print("* ");
//             }
//             System.out.println();
//         }
//         s1.close();
//     }
// }