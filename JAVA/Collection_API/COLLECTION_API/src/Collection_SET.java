import java.util.*;

public class Collection_SET {
    public static void main(String args[]) {
        Set<Integer> nums = new HashSet<Integer>();//TreeSet<Integer>();
        nums.add(5);
        nums.add(6);
        nums.add(7);
        nums.add(6);
        nums.add(85);

System.out.println(nums);
    }
}

// HashSet is used for unsorted sets 
// TreeSet are used to get Sorted Sets