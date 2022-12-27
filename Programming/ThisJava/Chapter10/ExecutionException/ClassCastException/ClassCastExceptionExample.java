package Chapter10.ExecutionException.ClassCastException;
// ClassCastingException
public class ClassCastExceptionExample {
    public static void main(String[] args) {
        Dog dog = new Dog();
        changeDog(dog);

        Cat cat = new Cat();
        changeDog(cat);
    }

    public static void changeDog(Animal animal) {
        // if (animal instanceof Dog) {
            Dog dog = (Dog) animal;         // ClassCastingException 발생 가능
        // }
    }
}

class Animal {}
class Dog extends Animal {}
class Cat extends Animal {}

/*
14행에서 ClassCastingException이 발생
이유 : 9행에서 Cat객체를 매개값으로 주었기 때문에 Dog 타입으로 변환할 수 없다.

잘못된 매개값이 들어올수 있기 때문에, changeDog() 메소드에서 13, 15행 주석을 풀어
타입 체크를 먼저 하는 것이 좋다.
*/