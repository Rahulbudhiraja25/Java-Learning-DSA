public class Basic_pattern4 {
    public static void main(String args[]) {
        int n = 5;
        for (int i = 1; i <= n; i++) {

            for (int k = n; k > i; k--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print(k);
            }

            for (int k = i - 1; k >= 1; k--) {
                System.out.print(k);
            }
            System.out.println();
        }
    }
}
