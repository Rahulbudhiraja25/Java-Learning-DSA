import java.util.Scanner;

public class Pattern14 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nsp = n - 1, nst = 1;
        int nr = (n * 2) - 1;
        // int nnsp = 1, nnst = n - 1;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= nsp; j++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= nst; j++) {
                System.out.print("* ");
            }
            if (i <= nr / 2) {
                nst++;
                nsp--;
            } else {
                nst--;
                nsp++;
            }
            System.out.println();
        }
        s1.close();
    }
}

// for (int i = 1; i <= n - 1; i++) {
// for (int j = 1; j <= nnsp; j++) {
// System.out.print(" ");
// }
// for (int j = 1; j <= nnst; j++) {
// System.out.print("* ");
// }
// nnsp++;
// nnst--;
// System.out.println();
// }
