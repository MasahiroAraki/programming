import java.util.List;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>();
        namelist.add("嵐");
        namelist.add("市川");
        namelist.add("右近");
        namelist.add("猿弥");
        namelist.add("尾上");
        for (var i = 0; i < namelist.size(); i++) {
            System.out.println(namelist.get(i));
        }
    }
}