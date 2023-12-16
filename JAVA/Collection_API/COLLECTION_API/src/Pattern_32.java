import java.util.Scanner;

public class Pattern_32 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = (n * 2) - 1;
        int counter = 1;

        for (int i = 1; i <= nr; i++) {
            for (int j = 1; j <= counter; j++) {
                if (i == 1 || i == nr) {
                    System.out.print(counter + " ");
                } else if (j == counter) {
                    System.out.print(counter + " ");
                }

                else {
                    System.out.print(counter + " *  ");
                }
            }
            System.out.println();
            if (i <= nr / 2) {
                counter++;
            } else {
                counter--;
            }

        }
        s1.close();
    }
}
