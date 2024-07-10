class Student {
    private String name;
    private int score;

    public Student(String name, int score) {
        this.name = name;
        this.score = score;
    }

    public String getName() {
        return name;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public int getScore() {
        return score;
    }
    
    public void setScore(int score) {
        this.score = score;
    }

    public void printData() {
        System.out.println("Name: " + name + ", Score: " + score);
    }
}

public class Main {
    public static void main(String[] args) {
        var s1 = new Student("Masa", 70);
        s1.printData();
    }
}
