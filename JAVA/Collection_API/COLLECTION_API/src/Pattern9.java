import java.util.Scanner;

public class Pattern9 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int sp = n - 1;
        int st = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = sp; j >= 0; j--) {
                System.out.print("  ");
            }
            for (int k = 1; k <= st; k++) {
                System.out.print("* ");
            }
            sp--;
            st=st+2;
            System.out.println();
        }
s1.close();
    }
}
