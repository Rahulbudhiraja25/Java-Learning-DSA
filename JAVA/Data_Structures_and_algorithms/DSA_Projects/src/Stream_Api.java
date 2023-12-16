import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class Stream_Api {
    public static void main(String args[]) {

        List<Integer> al = Arrays.asList(5, 4, 10, 15, 25);

        al.stream()
                .map(n -> n * 2)
                .forEach(n -> System.out.println(n));
        ;
    }

//     Stream<Integer>data=al.stream().map(n->n*2);
//     Stream <Integer>mappedData=data.map(n->n*2);
//     mappedData.forEach(n->System.out.println(n));
// }
}

  