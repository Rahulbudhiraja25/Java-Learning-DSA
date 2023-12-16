import java.util.Scanner;

public class Pattern_29 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int sp = n - 1;
        int zero = 1;
        int counter = 1;
        int num = 1;
        int nr = n;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= sp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= num; j++) {
                System.out.print(counter + " ");
            }

            for (int j = 1; j <= zero; j++) {
                if (i != 1) {
                    System.out.print("0" + " ");
                } else {

                }
            }
            for (int j = 1; j <= num; j++) {
                if (i != 1) {
                    System.out.print(counter + " ");
                }
            }
            sp--;
            counter++;
            if (i != 1) {
                zero = zero + 2;
            }
            System.out.println();
        }
        s1.close();
    }
}
