record Person(String name, int age){}

public class Main {
    public static void main(String[] args) {
        Person p = new Person("John", 20);
        System.out.println("name=" + p.name());
        System.out.println("age=" + p.age());
    }
}
