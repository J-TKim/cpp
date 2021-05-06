#include <iostream>

using namespace std;

int main() {
    // while문, do while 문
    string str = "JeongTae";
    int i = 0;
    while (str[i] != '\0') {
        cout << str[i] << endl;
        i++;
    };

    bool a = true;
    bool b = false;

    while (b) {
        cout << "no print" << endl;
    };

    do {
        cout << "no print" << endl;
    } while (b);

    return 0;
}
