package Chapter07.AbstractMethod;
// 실행 클래스
public class AnimalExample {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();
        dog.sound();
        cat.sound();
        System.out.println("-------");

        // 변수의 자동 타입 변환
        Animal animal = null;
        animal = new Dog();     // 자동 타입 변환
        animal.sound();         // 재정의된 메소드 호출
        animal = new Cat();     // 자동 타입 변환
        animal.sound();         // 재정의된 메소드 호출
        System.out.println("--------");

        // method polymorphism
        animalSound(new Dog());     // 자동 타입 변환
        animalSound(new Cat());     //  ;;      --> 24행의 (Animal animal)
    }

    public static void animalSound(Animal animal) {
        animal.sound();     // 재정의된 메소드 호출
    }
}

/*
AnimalExample 클래스는 Dog와 Cat 객체를 생성해서 sound() 메소드를 호출했다.

sound() 메소드를 호출하는 방법을 3가지 방식으로 표현했다.
1) 가장 일반적인 방식, Dog와 Cat 변수로 호출
2) Animal 변수로 타입 변환해서 sound() 메소드를 호출
    자식 타입은 부모 타입으로 자동 변환이 될 수 있고, 메소드가 재정으되어 있을 겨우
    재정의된 자식 메소드가 호출되는 상속의 특징이 그대로 적용된다.
3) 부모 타입의 매개 변수에 자식 객체를 대입해서 메소드의 다형성을 적용했다.
    이것은 2번째와 같은 원리로 자식 객체가 부모 타입으로 자동 타입 변환되어 재정의된
    sound() 메소드가 호출된다.
*/