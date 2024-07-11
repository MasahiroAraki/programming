import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Set<String> nameset = new HashSet<>(
          Arrays.asList("Alice", "Bob", "Caroline", "David", "Eve"));
        System.out.println(nameset.contains("Alice"));
    }
}