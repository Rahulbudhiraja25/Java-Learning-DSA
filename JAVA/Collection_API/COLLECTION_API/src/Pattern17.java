import java.util.Scanner;

public class Pattern17 {
    public static void main(String[] args) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int st = n / 2;
        int sp = 1;
        for (int i = 1; i <= nr; i++) {
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
            if (i >= n / 2 + 1) {
                st++;
                sp = sp - 2;
            } else {
                sp = sp + 2;
                st--;
            }

        }
        s1.close();
    }
}
