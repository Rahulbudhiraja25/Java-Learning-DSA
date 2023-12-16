import java.util.Scanner;

public class Pattern0 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter number for which you want to print patern");
        n = s1.nextInt();
        while (n != 0) {
            System.out.println("*");
            n--;
        }
        s1.close();
    }
}
