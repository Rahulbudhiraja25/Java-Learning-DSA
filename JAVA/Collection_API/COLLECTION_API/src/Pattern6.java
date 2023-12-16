import java.util.Scanner;

public class Pattern6 {
    public static void main(String args[]) {
        int n;
        System.out.println("Enter value of n");
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nsp = 0, nst = n;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= nsp; j++) {
                System.out.print("  ");
            }
            nsp = nsp + 2;
            for (int j = nst; j >= 1; j--) {
                System.out.print("* ");
            }
            nst--;
            System.out.println();
        }
        s1.close();
    }

}
