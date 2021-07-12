# include <iostream>

using namespace std;

void helloCPP(int);
void helloCPP2(int, int);

int main()
{
    int times, times2;
    cout << "정수를 입력하십시오.\n";
    cin >> times;

    cout << "한번 더 정수를 입력하십시오.\n";
    cin >> times2;

    helloCPP(times);

    cout << "\n";

    helloCPP2(times, times2);

    return 0;
}

void helloCPP(int n)
{
    for (int i = 0; i < n; i++)
        cout << "Hello, C++!\n";
}

void helloCPP2(int n, int m)
{
    for (int i = 0; i < n; i++)
        cout << "Hello\n";

    for (int i = 0; i< m; i++)
        cout << "C++!\n";
}
