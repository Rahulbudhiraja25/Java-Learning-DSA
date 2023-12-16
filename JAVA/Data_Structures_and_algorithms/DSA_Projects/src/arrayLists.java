import java.util.*;

// import javax.swing.plaf.synth.SynthScrollPaneUI;
public class arrayLists {
    public static void main(String args[]){
        ArrayList<Integer>array=new ArrayList<>();

        array.add(2);
        array.add(3);
        array.add(4);
        array.add(6);
        array.add(8);


        // array.remove(2);
        array.set(2, 78);
      for(int n:array){
        System.out.println(n);
      }
      System.out.println(array);
      System.out.println(array.contains(8));
      System.out.println(array.size());
    }
}
