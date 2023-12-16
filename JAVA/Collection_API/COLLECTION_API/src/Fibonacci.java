import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        int n, sum = 0, a = 0, b = 1;
        System.out.println("Enter a Number");
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        System.out.println(a + "\n" + b);
        for (int i = 2; i < n; i++) {
            sum = a + b;
            System.out.println(sum);
            a = b;
            b = sum;
        }

        s1.close();
    }

}
