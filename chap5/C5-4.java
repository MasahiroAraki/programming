import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        var nameList = List.of("Alice", "Bob", "Caroline", "David", "Eve");
        var lenList = new ArrayList<Integer>();
        for(String s: nameList) {
            lenList.add(s.length());
        }
        System.out.println(lenList);
    }
}