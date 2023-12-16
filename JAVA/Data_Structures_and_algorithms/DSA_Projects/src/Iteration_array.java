public class Iteration_array {
    public static void main(String args[]) {
        String grocerry[] = { "Apple", "Banana", "Grapes", "Avacado", "Orange" };

        for (String item : grocerry) {
            System.out.println(item);
        }
        System.out.println("Item at index 3 is "+grocerry[3]+" and "+grocerry[3]+" is good for health");
    }
}
