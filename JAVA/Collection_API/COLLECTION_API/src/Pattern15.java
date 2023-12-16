import java.util.Scanner;

public class Pattern15 {
    public static void main(String[] args) {
        int n;
        System.out.println("Enter a number");
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = (n * 2) - 1;
        int nsp = 0, nst = n;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= nsp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= nst; j++) {
                System.out.print("* ");
            }
            System.out.println();
            if (i <= nr / 2) {
                nsp = nsp + 2;
                nst--;
            } else {
                nsp = nsp - 2;
                nst++;
            }
        }
        s1.close();
    }
}
