import java.util.Map;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) {
        Map<Integer, String> stmap = new TreeMap<>();
        stmap.put(1001, "Alice");
        stmap.put(1002, "Bob");
        stmap.put(1003, "Caroline");
        stmap.put(1004, "David");
        stmap.put(1005, "Eve");
        stmap.put(1007, "Giant");
        
        System.out.println(stmap.get(1005));
    }
}