#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;

    default:
        cout << "Didn't Match";
    }
}