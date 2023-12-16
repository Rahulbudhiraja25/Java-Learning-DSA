// // import java.nio.file.NotLinkException;
import java.util.Scanner;

public class Pattern_28 {
    public static void main(String args[]){
        int n;
        Scanner s1=new Scanner(System.in);
        n=s1.nextInt();
       int nr=n;
    //    int counter=1;
       int sp=nr-1;
    //    int num=1;
       for(int i=1;i<=nr;i++){
        for(int j=1;j<=sp;j++){
            System.out.print("  ");
        }
       for(int j=1;j<=i;j++){
        System.out.print(j+" ");
       }
       for(int j=i-1;j>=1;j--){
        System.out.print(j+" ");
       }
            System.out.println();
            sp--;
            // num=num+2;
       }
       s1.close();
    }
}


