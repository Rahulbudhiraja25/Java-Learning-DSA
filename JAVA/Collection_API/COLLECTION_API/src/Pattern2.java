import java.util.Scanner;

public class Pattern2 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        s1.close();
    }
}
