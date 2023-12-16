import java.util.LinkedList;

public class LinkedLists {
    public static void main(String args[]) {
        LinkedList<String> list = new LinkedList<String>();
        list.add("Ram");
        list.add("mohan");
        list.add("suresh");
        list.add("shyam");

        String name;

        for (int i = 0; i < list.size(); i++) {
            name = list.get(i);
            System.out.println(name);
        }
    }
}
