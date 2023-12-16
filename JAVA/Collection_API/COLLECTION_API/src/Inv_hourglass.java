import java.util.*;

public class Inv_hourglass {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr=(n*2)+1;
        int no=n;
        int sp=n*2-1;

        for(int i=1;i<=5;i++){
            for(int j=n;j>=no;j--){
                System.out.print(j);
            }
            for(int j=1;j<=sp;j++){
                System.out.print(" ");
            }
            for(int j=no;j<=n;j++){
                System.out.print(j);
            }
            System.out.println();
            sp=sp-2;
            no--;

            if(i>=nr/2){

            }
        }
        }
    }

