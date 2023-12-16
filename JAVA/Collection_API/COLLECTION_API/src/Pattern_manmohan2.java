import java.util.Scanner;

public class Pattern_manmohan2 {
    public static void main(String args[]){
        int n;
        Scanner s1=new Scanner(System.in);
        n=s1.nextInt();
        int counter=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(j==1||j==i){
                System.out.print(counter);
            }
            else{
                System.out.print(0);
            }
            }
            System.out.println();
            if(i!=1){
                counter++;
            }
        }
        s1.close();
    }
}
