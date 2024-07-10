import java.util.List;
import java.util.ArrayList;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>();
        namelist.add("あらし");
        namelist.add("えんや"); 
        namelist.add("おのえ");
        namelist.add("いちかわ");
        namelist.add("うこん");

        namelist.sort(Comparator.naturalOrder());
        for (String person: namelist) {
            System.out.println(person);
        }
    }
}