import java.util.Scanner;

public class RevNum {
    public static void main(String args[]) {
        int num;
        int revnum = 0;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter a number");
        num = s1.nextInt();
        while (num != 0) {
            int temp;
            temp = num % 10;
            revnum = (revnum * 10) + temp;
            num = num / 10;
        }
        System.out.println(revnum);
        s1.close();
    }

}
