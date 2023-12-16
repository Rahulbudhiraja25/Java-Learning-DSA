import java.util.Scanner;

public class Pattern_33 {
    public static void main(String args[]) {
        int n;
        Scanner s1 = new Scanner(System.in);
        n = s1.nextInt();
        int nr = n;
        int counter = nr - 1;
        int sp = nr - 1;
        // int lc=9;
        for (int i = 1; i <= nr; i++) {
            for(int j=1;j<=sp;j++){
                System.out.print("  ");
            }
          for(int j=counter;j<=nr-1;j++){
            if(i!=1){
            System.out.print(j+" ");
        }
          }
          System.out.print("0 ");

          for(int j=nr-1;j>=counter;j--){
            if(i!=1){
            System.out.print(j+" ");
        }
          }
          System.out.println();
        //   lc--;
        if(i!=1){
          counter--;
        }
          sp--;
        }
        s1.close();
    }
}

// for (int j = 1; j <= sp; j++) {
// System.out.print(" ");
// }
// for (int j = counter; j <= nr - 1; j++) {
// System.out.print(counter + " ");
// }
// for (int j = 1; j <= 1; j++) {
// System.out.print(0 + " ");
// }
// for (int j = counter; j <= nr - 1; j++) {
// System.out.print(counter + " ");
// }
// System.out.println();
// counter--;
// sp--;