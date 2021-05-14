#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "입력하신 값은 1입니다.\n";
        break;
    
    case 2:
        cout << "입력하신 값은 2입니다.\n";
        break;
    
    case 3:
        cout << "입력하신 값은 3입니다.\n";
        break;

    default:
        cout << "지정한 수 이외의 다른 값 입니다.\n";
        break;
    }

    cout << "switch 구문이 끝났습니다.\n";

    return 0;
}
