import java.util.*;

class Student {
    int age;
    String name;

    Student(int age, String name) {
        this.age = age;
        this.name = name;
    }

    @Override
    public String toString() {
        return super.toString();

    }
}

public class Comparator_CustomDT {
    public static void main(String args[]) {

        List<Student> Names = new ArrayList<Student>();
        Names.add(new Student(15,"Rahul Budhiraja"));
        Names.add(new Student(65,"Rakesh Goyal"));
        Names.add(new Student(25,"Mukesh Ambani"));
        Names.add(new Student(2,"Elon Musk"));
        Names.add(new Student(22,"Bill Gates"));
        Names.add(new Student(85,"Mark Zuckersburg"));


        Comparator<Student> c1= new Comparator<Student>() {
            public int compare(Student i,Student j){
                if(i.age>j.age){
                    return 1;
                }
                else{
                    return -1;
                }
            }
        };
        Collections.sort(Names,c1);

        for(Student c:Names){
            System.out.println(c.age+" : "+c.name);
        }
    }
}
