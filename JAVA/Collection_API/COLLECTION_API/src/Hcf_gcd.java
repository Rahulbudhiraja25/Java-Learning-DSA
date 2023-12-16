import java.util.Scanner;

public class Hcf_gcd {
    public static void main(String args[]) {
        int divident, divisor, remainder = 1;
        ;
        Scanner s2 = new Scanner(System.in);

        System.out.println("Enter Dividend");
        divident = s2.nextInt();
        System.out.println("Enter Divisor");
        divisor = s2.nextInt();

        while (divident % divisor != 0) {
            remainder = divident % divisor;
            divident = divisor;
            divisor = remainder;

        }
        s2.close();
        System.out.println(divisor);

    }
}
