import java.util.Scanner;

public class Pattern_triangle {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int sp = n - 1;
        int counter = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sp; j++) {
                System.out.print("  ");
            }
            for (int j = i; j <= counter; j++) {

                System.out.print(j + " ");

            }
            for (int j = counter - 1; j >= i; j--) {
                System.out.print(j + " ");
            }
            System.out.println();
            sp--;
            counter = counter + 2;
        }
        s1.close();
    }
    
}
