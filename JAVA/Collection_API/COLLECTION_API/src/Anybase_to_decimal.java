import java.util.Scanner;

public class Anybase_to_decimal {
    public static void main(String args[]) {
        int number;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter the number");
        number = s1.nextInt();
        int rem;
        int sourceBase;
        System.out.println("Enter the Source Base of Number");
        sourceBase = s1.nextInt();
        int multiplier = 1;
        int ans = 0;
        while (number != 0) {
            rem = number % 10;
            rem = rem * multiplier;
            multiplier = multiplier * sourceBase;
            number = number / 10;
            ans = ans + rem;
        }
        System.out.println("The equivalent decimal number is " + ans);
        s1.close();
    }
}
