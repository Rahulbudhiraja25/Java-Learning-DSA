import java.util.Scanner;

public class PAttern26 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int sp = nr - 1;
        int num = 1;
        int counter = 1;
        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j < sp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= num; j++) {
                System.out.print(counter + " ");
                counter++;
            }
            System.out.println();
            num = num + 2;
            sp--;
        }
        s1.close();
    }
}
