import java.util.List;
import java.util.ArrayList;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>(List.of("David", "Alice", "Caroline", "Bob", "Eve"));
        namelist.sort(Comparator.naturalOrder());
        for (String person: namelist) {
            System.out.println(person);
        }
    }
}