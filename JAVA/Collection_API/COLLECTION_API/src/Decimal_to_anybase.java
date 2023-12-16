import java.util.*;
public class Decimal_to_anybase {
    public static void main(String args[]){
        int number;
        int sourceBase;
        int ans=0;
        int multiplier=1;
        Scanner s1=new Scanner(System.in);
        System.out.println("Enter a number you want to convert");
        number=s1.nextInt();
        System.out.println("Enter the Base ");
        sourceBase=s1.nextInt();
        while (number != 0) {
            int rem;
            rem = number % sourceBase;
            rem = rem * multiplier;
            multiplier = multiplier * 10;
            number = number / sourceBase;
            ans = ans + rem;
        }
        System.out.println("The equivalent source base number is "+ans);
        s1.close();
    }   
}
