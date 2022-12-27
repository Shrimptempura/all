package Chapter06.Pratice.NumberOf15;

public class MemberService {
    String id;
    String password;

    // MemberService(String id, String password) {
    //     this.id = id;
    //     this.password = password;
    // }

    boolean login (String id, String password) {
        if (id.equals("hong") && password.equals("12345"))
        // if (id == "hong" && password == "12345") 가능
        // if (this.id == "hong" && this.password == "12345") 틀림
            return true;
        else
            return false;
    }

    void logout(String id) {
        System.out.println("로그아웃 되었습니다.");
    }
    // void logout() {
    //     System.out.println("로그아웃 되었습니다.");
    // }
}
