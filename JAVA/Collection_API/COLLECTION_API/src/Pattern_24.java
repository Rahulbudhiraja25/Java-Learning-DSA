import java.util.*;

public class Pattern_24 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int num = 1;
        int sp = nr - 1;

        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= sp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= num; j++) {
                System.out.print("1 ");
            }
            num = num + 2;
            sp--;
            System.out.println();
        }
        s1.close();
    }
}
