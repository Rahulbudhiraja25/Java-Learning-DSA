import java.util.Scanner;

public class Pattern18 {
    public static void main(String[] args) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int st = 1;
        int sp = n / 2;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= sp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= st; j++) {
                System.out.print("* ");
            }
            System.out.println();
            if (i > (n / 2) ) {
                st = st - 2;
                sp++;
            } else {
                st = st + 2;
                sp--;
            }
        }
        s1.close();
    }
}
