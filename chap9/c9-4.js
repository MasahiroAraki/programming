// クラスの定義
class Student {
    constructor(name, score) {
        this.name = name;
        this.score = score;
    }

    toString() {
        return `Student{name=${this.name}, score=${this.score}}`;
    }
}

const s1 = new Student("Masa", 70);
console.log(s1);  // Student{name=Masa, score=70}
