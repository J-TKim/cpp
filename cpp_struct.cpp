#include <iostream>

using namespace std;

int main() {
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합
    // cf) 배열 : 같은 데이터형의 집합
    
    // ex) 축구선수
    struct MyStruct
    {
        string name;
        string position;
        float height;
        float weight;
    } B;

    MyStruct A;

    A.name = "Son";
    A.position = "Forward";
    A.height = 183;
    A.weight = 77;

    /*
    MyStruct A = {
        "Son",
        "Striker",
        183,
        77
    };
    */

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {};
    cout << B.height << endl;

    MyStruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << C[0].height << endl;

    return 0;
}
