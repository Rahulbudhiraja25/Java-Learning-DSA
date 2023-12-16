import java.util.*;
public class Pattern_hollow_rhombus{
    public static void main(String args[]){
        int n;
        Scanner s1=new Scanner(System.in);
        n=s1.nextInt();
        int nr=n;
        int sp=n-1;
        for(int i=1;i<=nr;i++){
            for(int j=1;j<=sp;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=n;j++){
                if(i==1||i==n){
                    System.out.print("*");
                }
                else{
                    if(j==1||j==n){
                        System.out.print("*");
                    }
                    else{
                        System.out.print(" ");
                    }
                }
            }
            System.out.println();
            sp--;

        }
        s1.close();
    }
}