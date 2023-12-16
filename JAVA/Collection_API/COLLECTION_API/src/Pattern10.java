import java.util.Scanner;

public class Pattern10 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int n;
        n = s1.nextInt();
        int st = (n * 2) - 1;
        int sp = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= st; j++) {
                System.out.print("* ");
            }
            sp++;
            st = st - 2;
            System.out.println();
        }
        s1.close();
    }
}
