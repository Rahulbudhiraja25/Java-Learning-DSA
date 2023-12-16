import java.util.*;
public class Pattern_withzero {
    public static void main(String args[]){
        int n;
        Scanner s1=new Scanner(System.in);
        n=s1.nextInt();
        int nr=n;
        
        for(int i=1;i<=nr;i++){
            for(int j=1;j<=i;j++){
               if(j==1||j==i){
                System.out.print(i+"\t");
               }
               else{
                System.out.print(0+"\t");
               }
            }
            System.out.println();
        }
        s1.close();
    }
}
