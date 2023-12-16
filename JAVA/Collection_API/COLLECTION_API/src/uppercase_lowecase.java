import java.util.Scanner;

public class uppercase_lowecase {
    public static void main(String args[]) {
        char c;
        Scanner s1 = new Scanner(System.in);
        c = s1.next().charAt(0);
   
        if (c >= 65 && c <= 90) {
            System.out.println("UpperCase");
        } 
        else if (c >= 97 && c <= 122) {
            System.out.println("Lowercase");
        }
        else{
            System.out.println("Wrong Input");
        }
        s1.close();
    }
}
