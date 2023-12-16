import java.util.Scanner;

public class Even_odd {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int a;
        System.out.println("Enter a number");
        a = s1.nextInt();
        if (a % 2 == 0)
            System.out.println("Even Number");
        else
            System.out.println("Odd Number");
        s1.close();
    }
}