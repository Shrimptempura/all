<배열의 정수 연산>
ary + 1 ==> 5241932 + (1 * sizeof(ary[0])) ==> 5241932 + (1 * 4) ==> 5241936

<배열의 주소에 정수 연산>
&ary + 1 ==> 5241932 + (1 * sizeof(ary)) ==> 5241932 + (1 * 20) ==> 5241952