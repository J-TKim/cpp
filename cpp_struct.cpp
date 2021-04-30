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
    };

    MyStruct A;

    return 0;
}
