public class Main {
    public static void main(String[] args) {
        Person person = null;
        String name = person.getName();  // NullPointerExceptionが発生
        System.out.println("名前: " + name);
    }

    static class Person {
        private String name;
        public Person(String name) {this.name = name;}
        public String getName() {return name;}
    }
}
