package Chapter11.ObjectClass.HashCode;
// hashCode() 메소드를 재정의하지 않음
public class Key {
    public int number;

    public Key(int number) {
        this.number = number;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Key) {
            Key compareKey = (Key) obj;
            if (this.number == compareKey.number) {
                return true;
            }
        }
        return false;
    }

    // hashCode() 메소드 재정의 추가 22-25, 미추가시 KeyExample 값 = null 발생
    @Override
    public int hashCode() {
        return number;
    }
}

/*
Key 클래스는 equals() 메소드를 재정의해서 number 필드값이 같으면 true를
리턴하도록 했다. 그러나 hashCode() 메소드는 재정의하지 않았기 때문에
Object의 hashCode() 메소드가 사용되었다.
*/