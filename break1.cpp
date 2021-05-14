#include <iostream>

using namespace std;

int main() {
    int i = 0;
    while (true)
    {
        cout << "i의 값은 " << i << " 입니다." << endl;
        i++;
        if (i > 10)
            break;
    }

    return 0;
}
