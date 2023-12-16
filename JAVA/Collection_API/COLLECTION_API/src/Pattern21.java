import java.util.Scanner;

public class Pattern21 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        // int nr = n;
        // int sp =n+2;
        // int nst=1;
        // for(int i=1;i<=nr;i++){
        // for(int j=1;j<=nst;j++){
        // System.out.print("* ");
        // }
        // for(int j=1;j<=sp;j++){
        // System.out.print(" ");
        // }
        // for(int j=1;j<=nst;j++){
        // System.out.print("* ");
        // }
        // System.out.println();
        // nst=nst+1;
        // sp=sp-2;

        // }
        // for(int j=1;j<=n+4;j++){
        // System.out.print("* ");
        // }

        int str = 2 * n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 2 * n; j++) {
                if (j <= i || j >= str) {
                    System.out.print("*");
                }

                else {
                    System.out.print(" ");
                }

            }
            str--;
            System.out.println();

        }
        s1.close();
    }
}
