import java.util.Map;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) {
        Map<Integer, String> stmap = new TreeMap<>();
        stmap.put(1001, "嵐");
        stmap.put(1002, "市川");
        stmap.put(1003, "右近");
        stmap.put(1004, "猿弥");
        stmap.put(1005, "尾上");
        stmap.put(1007, "片岡");
        
        System.out.println(stmap.get(1005));
    }
}