import java.util.Scanner;

public class Pattern13 {
    public static void main(String[] args) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
       
        int st = 1;
        int nr = (n * 2) - 1;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= st; j++) {
                System.out.print("* ");

            }
            System.out.println();
            if (i <= (nr / 2)) {
                st++;
            } else {
                st--;
            }
        }
        s1.close();
    }
}













// Alternate Way

 // int st = 1;
        // int nst = 1;
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= st; j++) {
        // System.out.print("* ");
        // }
        // st++;
        // System.out.println();
        // }
        // for (int i = 1; i <= n - 1; i++) {
        // for (int j = (n - 1); j >= nst; j--) {
        // System.out.print("* ");
        // }
        // nst++;
        // System.out.println();
        // }
        // s1.close();