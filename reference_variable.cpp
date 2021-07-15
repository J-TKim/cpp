#include <iostream>

using namespace std;

void SwapA(int&, int&);
void SwapB(int*, int*);
void SwapC(int, int);

int main()
{
    // 참조 (reference)란?
    // 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
    // 함수의 매개변수에 사용
    
    int wallet1 = 100;
    int wallet2 = 200;

    cout << "최초 상태" << "endl";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    cout << "참조를 이용한 값의 교환\n";
    SwapA(wallet1, wallet2);
    cout << "참조 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    wallet1 = 100;
    wallet2 = 200;

    cout << "포인터를 이용한 값의 교환\n";
    SwapB(&wallet1, &wallet2);
    cout << "포인터를 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    wallet1 = 100;
    wallet2 = 200;

    cout << "값을 이용한 값의 교환\n";
    SwapC(wallet1, wallet2);
    cout << "값을 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
}

// 참조로 전달하는 방식
void SwapA(int& a, int& b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

// 포인터로 전달하는 방식
void SwapB(int* a, int* b) {
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

// 값으로 전달하는 방식
void SwapC(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}
