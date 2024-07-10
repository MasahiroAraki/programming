import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Set<String> nameset = new HashSet<>(
          Arrays.asList("嵐", "市川", "右近", "猿弥", "尾上"));
        System.out.println(nameset.contains("嵐"));
    }
}