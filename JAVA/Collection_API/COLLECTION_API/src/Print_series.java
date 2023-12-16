import java.util.*;

public class Print_series {
    public static void main(String args[]) {
        int n1;
        int n2;
        Scanner s1 = new Scanner(System.in);
        n1 = s1.nextInt();
        n2 = s1.nextInt();
        int k = 1;
        for (int i = 1; k<=n1; i++) {

            int temp = (3 * i) + 2;
            if (temp % n2 != 0) {
                System.out.println(temp);
                k++;
            }

        }
        s1.close();
    }
}
