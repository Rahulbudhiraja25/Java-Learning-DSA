import java.lang.Math;
import java.util.*;
public class Guess_the_number {

    public static void main(String args[]){
        int number=(int)(Math.random()*100);
        int UserInput;
        Scanner s1=new Scanner(System.in);
        System.out.println("*********************Guess The Number******************");
        System.out.println("Guess a Number b/w 0 to 100");
        UserInput=s1.nextInt();
        int counter =0;
        while(UserInput!=number){

        if(UserInput<0){
         break;
        }
        else if(UserInput<number){
            System.out.println("Guess a greater number \n");
            UserInput=s1.nextInt();
        }
        else{
            System.out.println("Guess a lower number\n");
            UserInput=s1.nextInt();
        }

        counter++;
        }
        if(UserInput>0){
        System.out.println("Congo You Guessed the number in "+counter+" number of attempts!!");
        }
        else{
            System.out.println("Thanks for trying the number you were trying to guess was "+number+" Play Again to win!");
        }
        s1.close();;
    }
}
