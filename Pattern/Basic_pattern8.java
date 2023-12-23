public class Basic_pattern8 {
    public static void main(String args[]) {
        int n = 5;

        char b = 64;
        for (int i = 1; i <= n; i++) {
            b++;
            char temp = b;

            for (int j = n; j >= i; j--) {
                System.out.print(b);
                b++;
            }
            b = temp;
            System.out.println();
        }
    }
}
