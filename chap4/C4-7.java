import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<>(List.of("Alice", "Bob", "Caroline", "David", "Eve"));
        Scanner scanner = new Scanner(System.in);
        System.out.print("Search: ");
        String searchName = scanner.nextLine();

        boolean found = false;
        for (String name : namelist) {
            if (name.equals(searchName)) {
                System.out.println("Found " + searchName);
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println("Not found " + searchName);
        }
        scanner.close();
    }
}
