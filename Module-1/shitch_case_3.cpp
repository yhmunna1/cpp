#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    switch (a % 2)
    {
    case 1:
        cout << "Odd";
        break;
    default:
        cout << "Even";
    }
}