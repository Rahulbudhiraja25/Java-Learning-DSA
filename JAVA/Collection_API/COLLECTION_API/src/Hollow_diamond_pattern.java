import java.util.*;

public class Hollow_diamond_pattern {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int st = n;

        for (int i = 1; i <= n; i++) {
           for(int j=1;j<=st;j++){
            System.out.print("* \t");
           }
            System.out.println();
        }
        s1.close();
    }
}
