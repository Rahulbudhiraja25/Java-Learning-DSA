import java.util.Scanner;

public class Pattern4 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nsp = n - 1, nst = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= nsp; j++) {
                System.out.print("  ");
            }
            nsp--;
            for (int j = 1; j <= nst; j++) {
                System.out.print("* ");
            }
            nst++;
            System.out.println();
        }
        s1.close();
    }
}
