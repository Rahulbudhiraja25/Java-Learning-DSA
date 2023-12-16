import java.util.Scanner;

public class Pattern_num1 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int counter = n;
        int st = 0;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= counter; j++) {
                System.out.print(j + " ");
            }
            for (int j = 1; j <= st; j++) {
                System.out.print("* ");
            }
            System.out.println();
            counter--;
            if (i == 1) {
                st = st + 1;
            } else {
                st = st + 2;
            }
        }
        s1.close();
    }
}
