import java.util.Scanner;

public class Pattern11 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int sp = n - 1;
        int st = 1;
        for (int i = 1; i <= 5; i++) {
            for (int j = sp; j >= 0; j--) {
                System.out.print("  ");
            }
            for (int j = 1; j <= st; j++) {
                System.out.print("*   ");
            }
            sp--;
            st++;
            System.out.println();
        }

        s1.close();
    }
}
