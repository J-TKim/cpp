#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 10;

    cout << "a는 " << a << " , b는 " << b << endl;
    cout << "a++는 " << a++ << endl;
    cout << "++b는 " << ++b << endl;
    cout << "a는 " << a << " , b는 " << b << endl;

    for (int i = 5; i > 0; i--) {
        cout << i << endl;
    };

    /*
    < : 작다.
    <= : 작거나 같다.
    == : 같다
    != 같지 않다
    */

    return 0;
}
