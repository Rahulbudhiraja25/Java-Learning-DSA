import java.util.Scanner;

public class Array_os {
    static Scanner s1=new Scanner(System.in);

    public static void main(String args[]) {
        int[] arr=takeInput();
        display(arr);
    }

    public static int[] takeInput() {
        System.out.println("Size?");
        int n = s1.nextInt();

        int[] arr=new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the variable ["+(i+1)+"]");
            arr[i] = s1.nextInt();
        }
        System.out.println();
        return arr;
    }
    public static void display(int[] array){
        System.out.println("Values in array are:-");
        for(int i:array){
            System.out.println(i);
        }
    }
}
