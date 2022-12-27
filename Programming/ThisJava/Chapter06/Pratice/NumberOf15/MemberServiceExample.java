package Chapter06.Pratice.NumberOf15;

public class MemberServiceExample {
    public static void main(String[] args) {
        MemberService memberService = new MemberService();
        boolean result = memberService.login("hong", "12345");
        if (result) {
            System.out.println("로그인 되었습니다.");
            memberService.logout("hong");
        }
        else
            System.out.println("id또는 password가 올바르지 않습니다.");
    }
}

// MemberService(String id, String password) {
//     this.id = id;
//     this.password = password;
// }
// 클래스문에서 생성자 생성시, 객체 생성 5행 new MemberService(); 오류
// 클래스문에서 생성자 선언이 있기 때문에, 기본생성자를 생성할 수 없다.
// Member(String id, String password);를 호출해서 객체를 생성해야 함
