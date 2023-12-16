import java.util.*;

public class Pattern_num2 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;

        int st = n - 1;

        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            for (int j = 1; j <= st; j++) {
                System.out.print("*");
            }
            System.out.println();

            st--;
        }
        s1.close();
    }
}
