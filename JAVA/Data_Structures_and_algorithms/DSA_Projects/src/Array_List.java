import java.util.ArrayList;

public class Array_List {
    public static void main(String args[]) {

            ArrayList<Integer>list=new ArrayList<Integer>();
            list.add(5);
            list.add(6);
            list.add(7);
            list.add(8);
            list.add(2);
            list.add(15);
            list.add(35);
            list.add(11);
            list.add(9);

            for(int i:list){
                System.out.println(i);
            }
                System.out.println();
            list.remove(4);
              for(int i:list){
                System.out.println(i);
            }
        }

    
}
