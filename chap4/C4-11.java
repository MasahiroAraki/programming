import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>();
        namelist.add("嵐");
        namelist.add("市川");
        namelist.add("右近");
        namelist.add("猿弥");
        namelist.add("尾上");

        // ユーザからの入力を受け取る
        Scanner scanner = new Scanner(System.in);
        System.out.print("検索したい名前を入力してください: ");
        String searchName = scanner.nextLine();

        // 線形探索
        boolean found = false;
        Iterator<String> it = namelist.iterator();
        while (it.hasNext()) {
            if (it.next().equals(searchName)) {
                found = true;
                break;
            }
        }

        if (found) {
            System.out.println(searchName + " はリスト内に存在します。");
        } else {
            System.out.println(searchName + " はリスト内に存在しません。");
        }

        scanner.close();
    }
}