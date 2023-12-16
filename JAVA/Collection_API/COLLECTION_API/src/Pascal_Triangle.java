import java.util.Scanner;

public class Pascal_Triangle {
    public static void main(String[] args) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n=s1.nextInt();
        int[][] pascal = new int[n][n];

        // Fill in the first row with 1
        for (int i = 0; i < n; i++) {
            pascal[0][i] = 1;
        }
        System.out.println(pascal[0][0] + "\t");

        // Fill in the rest of the triangle
        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    pascal[i][j] = 1;
                } else {
                    pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
                }
                System.out.print(pascal[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
