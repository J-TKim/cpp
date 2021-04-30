#include <iostream>

using namespace std;

int main() {
    // 열거체 (enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법.

    enum spectrum
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet,
        indigo,
        ultraviolet
    };
    /*
    1. spectrum을 새로운 데이터형 이름으로 만든다.
    2. red, orange, yellow.. 0부터 7까지 정수값을 각각 나타내는 기호 상수로 만든다.
    */

    spectrum a = orange;
    // spectrum a = orange + yellow; 에러
    cout << a << endl;

    int b;
    b = blue;
    b = blue + 3;

    cout << b << endl;
    return 0;
}
