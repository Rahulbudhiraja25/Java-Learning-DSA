import java.util.*;;

public class PAttern27 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int counter = 1;
        int sp = nr - 1;
        int num = 1;

        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= sp; j++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= num; j++) {
                System.out.print(counter + " ");
                counter++;
            }
            counter = 1;
            System.out.println();
            sp--;
            num = num + 2;

        }

        s1.close();
    }
}
