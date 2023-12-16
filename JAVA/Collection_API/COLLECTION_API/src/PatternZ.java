public class PatternZ {
    public static void main(String args[]) {
        int n = 5;
        int nr = 5;
        int st = 1;
        int fsp = 3;
        int bsp = 1;
        for (int i = 1; i <= nr; i++) {
            if (i == 1 || i == n) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            }
            for (int j = 1; j <= fsp; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= st; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= bsp; j++) {
                System.out.print("  ");
            }
            System.out.println();
            bsp++;
            fsp--;
        }

    }
}
