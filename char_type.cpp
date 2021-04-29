#include <iostream>

using namespace std;

int main() {
    // char : 작은 문자형
    int a = 77;
    char b1 = a;

    cout << b1 << endl;

    char b2 = 'M';
    // null 문자 '\0'
    cout << b2 << endl;

    char b3[] = {'a', 'b', 'c'};
    cout << b3 << endl;

    // "" 에는 명시적으로 '\0'이 포함
    char b4[] = "abc";
    cout << b4 << endl;

    return 0;
}
