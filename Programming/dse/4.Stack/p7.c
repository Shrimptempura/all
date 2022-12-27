/*
중위 표기 수식                  연산자 스택                 후위 표기 수식
(a + b) * c         
a + b) * c                      (
+ b) * c                        (                           a

                                +
b) * c                          (                           a


                                +
) * c                           (                           a b

* c                                                         a b +
c                               *                           a b + 
                                *                           a b + c
                                                            a b + c *

1) 연산자를 만나면 스택형식으로 쌓는다.
2) 수식이 다 옮기면 스택으로 하나씩 빼서 쌓는다.
3) 괄호가 있으면 똑같은데 우 괄호를 만나면, 괄호 쌍은 사라지고, 괄호안 연산자 스택이
    먼저 이동한다.

중위 표기 수식을 후위 표기 수식으로 변환하는 알고리즘
infix_to_postfix(exp);

스택 s를 생성하고 초기화
while (exp에 처리할 문자가 남아 있으면)
    ch <- 다음에 처리할 문자
    switch (ch)
    case 연산자:
        while (peek(s)의 우선순위 >= ch의 우선순위) do
            e <- pop(s)
            e를 출력
        push(s, ch);
        break;
    case 왼쪽 괄호:
        push(s, ch);
        break;
    case 오른쪽 괄호:
        e <- pop(s)
        while (e != 왼쪽괄호) do
            e룰 출력
            e <- pop(s)
        break;
    case 피연산자:
        ch를 출력
        break;
    while (not is_empty(s)) do
        e <- pop(s)
        e를 출력
*/