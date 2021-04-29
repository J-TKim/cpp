#include <iostream>
// #define PIE 3.1415926535

using namespace std;

// 1. 바뀔 필요가 없는 수
// 2. 바뀌면 안되는 수 == 상수

// 상수는 항상 초기화 해서 사용해야 하고, 이후에 값을 바꾸면 에러가 발생한다.

int main() {
    const float PIE = 3.14159265351;
    // 원의 넓이를 구하는 프로그램
    // 반지름 * 반지름 * pi

    int r1 = 3;
    float s1 = r1 * r1 * 3.14;
    cout << s1 << endl;

    int r2 = 3;
    float s2 = r2 * r2 * PIE;
    cout << s2 << endl;

    return 0;
}
