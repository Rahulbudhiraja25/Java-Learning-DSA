public class Basic_pattern10 {
    public static void main(String args[]) {
        int n = 5;
        char b='A';
        for (int i = 1; i <= n; i++) {
            for(int j=n;j>i;j--){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print(b+" ");
                b++;
            }
            System.out.println();
        }
    }
}
