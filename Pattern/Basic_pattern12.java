public class Basic_pattern12 {
    public static void main(String args[]) {
        int n = 6;
        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= n + 1; j++) {
                if (i == 1 || i == n || j == 1 || j == n+1) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
