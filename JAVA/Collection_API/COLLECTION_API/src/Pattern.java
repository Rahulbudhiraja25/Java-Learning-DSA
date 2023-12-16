import java.util.*;

public class Pattern {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);    
        n = s1.nextInt();
        int nr = n;
        for (int i = 1; i <= nr; i++) {
            for(int j=1;j<=i;j++){
                if((i%2==0)&&(j!=1)&&(j!=i)){
                    System.out.print(0);
                }
                else{
                    System.out.print(1);
                }
            }
            System.out.println();
        }
        s1.close();
    }
}