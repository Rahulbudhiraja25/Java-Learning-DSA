import java.util.Scanner;

public class Pattern7 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || j == n || i == n || j == 1) {
                    System.out.print("* ");
                }

                else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
        s1.close();
    }
}