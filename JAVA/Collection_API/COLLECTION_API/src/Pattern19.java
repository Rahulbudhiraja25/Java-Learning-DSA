import java.util.Scanner;

public class Pattern19 {
    public static void main(String[] args) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int sp = 1;
        int st = n / 2;

        for (int i = 1; i <= nr; i++) {
            if (i == 1 || i == n) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            } else {
                for (int j = 1; j <= st; j++) {
                    System.out.print("* ");
                }
                for (int j = 1; j <= sp; j++) {
                    System.out.print("  ");
                }
                for (int j = 1; j <= st; j++) {
                    System.out.print("* ");
                }
                System.out.println();
                if (i <= n / 2) {
                    st--;
                    sp = sp + 2;
                } else {
                    st++;
                    sp = sp - 2;
                }
            }
        }
        s1.close();
    }
}
