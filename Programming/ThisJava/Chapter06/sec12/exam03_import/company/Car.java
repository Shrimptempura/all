package Chapter06.sec12.exam03_import.company;

import Chapter06.sec12.exam03_import.hankook.*;
import Chapter06.sec12.exam03_import.hyndai.Engine;
import Chapter06.sec12.exam03_import.kumho.*;

public class Car {
    // 필드
    Engine engine = new Engine();
    SnowTire tire1 = new SnowTire();
    BigWidthTire tire2 = new BigWidthTire();
    Chapter06.sec12.exam03_import.hankook.Tire tire3 = 
    new Chapter06.sec12.exam03_import.hankook.Tire();
    Chapter06.sec12.exam03_import.kumho.Tire tire4 =
    new Chapter06.sec12.exam03_import.kumho.Tire();
    
}
/*
<improt문>
같은 패키지에 속하는 클래스들은 아무런 조건 없이 다른 클래스를 사용할 수 있지만 다른
패키지에 속하는 클래스를 사용하려면 두 가지 방법 중 하나를 선택해야 한다. 
첫번째 방법은 패키지와 클래스 모두 기술하는 것이다.
다음은 com.hankook 패키지에 소속된 Tire 클래스를 이용해서 필드를 선언하고 객체를 생성한
것이다.

    package com.mycompany;

    public class Car {
        com.hankook.Tire tire = new com.hankook.Tire();
        // 타입         필드명          객체 생성
    }

패키지 이름이 짧은 경우에는 불편함이 없겠지만, 패키지 이름이 길거나 이렇게 사용해야 할
클래스 수가 많다면 패키지 이름을 붙인다는 것은 전체 코드를 난잡해 보이게 할 수 있다.

그래서 두 번째 방법인 improt문을 주로 사용한다.
사용하고자 하는 패키지를 import문으로 선언하고, 클래스를 사용할 때에는 패키지를
생략하는 것이다.

    package com.company;

    import com.hankook.Tire;
    [ 또는 import com.hankook.*;]

    public class Car {
        Tire tire = new Tire();
    }

improt문이 작성되는 위치는 패키지 선언과 클래스 선언 사이다.
패키지에 포함된 다수의 클래스를 사용해야 한다면 클래스별로 import문을 작성할 필요 없이
클래스 이름을 생략하고 대신 *를 사용해서 import문을 한 번 작성하면 된다. 
*는 패키지에 속하는 모든 클래스들을 의미한다.

import문의 개수는 제한이 없고 필요한 패키지가 있다면 얼마든지 추가할 수 있다.
주의할 점은 import문으로 지정된 패키지의 하위 패키지는 import 대상이 아니다.
만약 하위 패키지에 있는 클래스들도 사용하고 싶다면 import문을 하나 더 작성해야 한다.
예를 들어 com.mycompany 패키지에 있는 클래스도 사용해야 하고, com.mycompany.project 
패키지에 있는 클래스도 사용해야 한다면 다음과 같이 두 개의 import문이 필요하다.

    import com.mycompany.*;
    import com.mycompany.project.*;

패키지 이름 전체를 기술하는 첫 번째 방법이 꼭 필요한 경우가 있는데,
서로 다른 패키지에 동일한 패키지 이름이 존재하고, 두 패키지가 모두 import가 되어 
있을 경우이다. 자바 컴파일러는 어떤 패키지에서 클래스를 로딩할지 결정할 수 없기 때문에
컴파일 에러가 발생한다. 이 경우에는 정확하게 패키지 이름 전체를 기술해야 한다.

세 패키지를 모두 사용하는 Car.java 소스를 보면, Tire 클래스는 import된 두 패키지에 
모두 있기 때문에 12, 14행처럼 패키지 이름과 함께 전테 이름이 기술되어야 한다.

9행의 Engine 클래스는 hyndai 패키지에만 존재하기 때문에 아무런 문제가 없고,
10 ~ 11행의 SnowTire와 BigWidthTire 클래스도 각각 hankook, kumho 패키지에만
존재하기 때문에 아무런 문제가 없다.
*/