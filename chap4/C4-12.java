import java.util.List;
import java.util.ArrayList;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>();
        namelist.add("David");
        namelist.add("Caroline");
        namelist.add("Alice");
        namelist.add("Eve");
        namelist.add("Bob");
        namelist.sort(Comparator.naturalOrder());
        for (String person: namelist) {
            System.out.println(person);
        }
    }
}
