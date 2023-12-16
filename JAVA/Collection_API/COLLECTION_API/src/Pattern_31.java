import java.util.Scanner;

public class Pattern_31 {
    public static void main(String args[]) {

        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = 5;
        int counter = n;

        for (int i = 1; i <= nr; i++) {
            for (int j = counter; j >= 1; j--) {
                if (j == i) {
                    System.out.print("* ");
                } else {
                    System.out.print(j + " ");
                }
            }
            System.out.println();
        }
        s1.close();
    }
}
