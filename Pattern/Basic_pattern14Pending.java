public class Basic_pattern14 {
    public static void main(String args[]) {
        int n = 10;
        int st = 1;
        for (int i = 1; i <= n; i++) {
            if (i <= n / 2) {
                for (int j = 1; j <= st; j++) {

                    System.out.print("*");
                }
                st = st + 2;
            } else if (i == (n / 2) + 1) {
                for (int j = 1; j <= st; j++) {
                    System.out.print("*");
                }
            } else {
                for (int j = 1; j <= st; j++) {
                    System.out.print("*");
                }
                st = st - 2;
            }
            System.out.println();
        }
    }
}
