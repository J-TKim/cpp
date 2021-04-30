#include <iostream>

using namespace std;

int main() {
    /*
    C++은 복합데이터형을 제공한다.
    >> 사용자 정의대로 새로운 데이터형을 만들 수 있다.
    복합데이터형 : 기본 정수형과 부동소수점형의 조합
    */

    /*
    배열(array) : 같은 데이터형의 집합
    typeName arrayName[arraySize];
    */
    short month[12] = { 1, 2, 3 };

    cout << month[0] << endl;
    cout << month[1] << endl;
    cout << month[2] << endl;
    cout << month[3] << endl;

    /*
    배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 계산한다.
    배열의 초기화를 선언 이후 나중에 할 수 는 없다
    배열을 다른 배열에 통째로 대입할 수 없다.
    short month[5] = { ... };
    short year[12] = { ... };
    year = month; => 에러
    초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
    배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정한다.
    즉, 명시적으로 첫 번째 우너소만 0으로 초기화하면, 나머지 원소들은 모두 0으로 초기화된다.
    배열을 초기화할때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다.
    */

    return 0;
}
