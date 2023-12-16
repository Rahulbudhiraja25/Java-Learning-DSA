import java.util.Scanner;

public class Pattern_Swastik {
    public static void main(String args[]) {
        Scanner s1 = new Scanner(System.in);
        int n;
        n = s1.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if((i==n/2+1)||(i<n/2+1&&j==1)||(i<n/2+1&&j==n/2+1)||(i>n/2+1&&j==n/2+1)||(i>n/2+1&&j==n)||(i==1&&j>n/2+1)||(i==n&&j<n/2+1)){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        s1.close();
    }
}
