import java.util.*;
// import java.util.jar.Attributes.Name;

public class Comparator_Collection {
    public static void main(String args[]) {
        List<String> Names = new ArrayList<>();
        Names.add("Rahul Budhiraja");
        Names.add("Rakesh Goyal");
        Names.add("Mukesh Ambani");
        Names.add("Elon Musk");
        Names.add("Bill Gates");
        Names.add("Mark Zuckersburg");
        Iterator<String> value = Names.iterator();
        
        while (value.hasNext()) {
            System.out.println(value.next());
        }
        
        System.out.println();

                // Using comparator without lamda 

        // Comparator <String>c1=new Comparator<String>() {
            
        //     public int compare(String i ,String j){
        //         return Integer.compare(i.length(), j.length());
        //     }
        // };

            //As Comparator is a functional Interface we can use Lamda Expression and ternaray oprator to writw logic in one line 
                 Comparator <String>c1= (i,j)->i.length()>j.length()?1:-1;
            //   System.out.println();
        Collections.sort(Names,c1);
        for (String name : Names) {
            System.out.println(name);
        }
    }
}
