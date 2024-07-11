import java.util.List;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>();
        namelist.add("Alice");
        namelist.add("Bob");
        namelist.add("Caroline");
        namelist.add("David");
        namelist.add("Eve");
        for (var i = 0; i < namelist.size(); i++) {
            System.out.println(namelist.get(i));
        }
    }
}