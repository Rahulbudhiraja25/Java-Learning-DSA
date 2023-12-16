import java.util.*;

public class Delhi_odd_Even {
    public static void main(String args[]) {
        int n;
        Scanner s1=new Scanner(System.in);
        n=s1.nextInt();
      
        for(int i=1;i<=n;i++){
            int CarNo=s1.nextInt();
            int OddSum=0;
            int EvenSum=0;

            while(CarNo>0){
                int digit=CarNo%10;
                if(digit%2==0){
                    EvenSum+=digit;
                }
                else{
                    OddSum+=digit;
                }
                CarNo=CarNo/10;
            }
            if(EvenSum%4==0 || OddSum%3==0){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
        }
        s1.close();
    }
}