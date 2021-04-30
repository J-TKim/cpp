#include <iostream>

using namespace std;

int main() {
    // 문자열 : 문자의 열
    char a[5] = {'H', 'E', 'L', 'L', 'O'};
    cout << a << endl;

    char b[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
    cout << b << endl;

    char c[] = "Hello";
    cout << c << endl;

    return 0;
}
