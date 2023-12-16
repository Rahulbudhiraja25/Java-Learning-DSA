import java.util.Scanner;

public class Array_Demo {
    public static void main(String args[]) {
        int[] arr=null;
        int no;
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter the numbers you want to store");
        no=s1.nextInt();
        arr = new int[no];
        // arr[0] = 5;
        // arr[1] = 10;
        // arr[2] = 40;
        // arr[3] = 340;
        // arr[4] = 240;
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the variable ["+(i+1)+"]");
            arr[i] = s1.nextInt();
        }

        // Using Normal For Loop
        // for (int i = 0; i < arr.length; i++) {
        //     System.out.println("The variable at index ["+i+"] is "+arr[i]);
        // }

        // Using For Each Loop
        // It is read only loop
        // It is forward only loop as no backwards there is allowed 
            int n=0;
        for(int i:arr){
            System.out.println("The variable at index ["+n+"] is "+i);  
            n++;
        }
        s1.close();
    }
}
