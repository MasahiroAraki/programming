import java.nio.file.Files;
import java.nio.file.Path;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

record Student(int score, String name) {}

public class Main {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        Path path = Path.of("data.csv");

        try (var br = Files.newBufferedReader(path)) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split(", ");
                int sc = Integer.parseInt(parts[0]);
                String nm = parts[1];
                students.add(new Student(sc, nm));
            }
        } catch (IOException e) {
            System.err.println("ファイルオープン失敗");
            e.printStackTrace();
            return;
        }

        for (Student st : students) {
            System.out.printf("name: %-9s  score: %d\n", st.name(), st.score());
        }
    }
}