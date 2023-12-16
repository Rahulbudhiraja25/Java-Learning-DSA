import java.util.Scanner;

public class pattern1 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter a number for which you want to print the pattern");
        n = s1.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        s1.close();
    }
}
