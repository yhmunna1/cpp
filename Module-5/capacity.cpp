#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "YH Munna";
    string s2 = "Munna";
    cout << s1.size() << endl;
    cout << s1.max_size() << endl;
    string m1 = "Munna Hossen, aaaaaaaaaaaaaaaaaaaaaaaaaaar";
    cout << m1.capacity() << endl;
    // m1.clear();

    cout << endl
         << endl
         << "Empty:" << endl;

    // If string is empty it will return "true", or it will return "false".
    string e;
    if (e.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    cout << endl
         << endl
         << "Resize:" << endl;

    // Resize
    // Before:
    string r1 = "Hello";
    cout << r1.size() << endl;
    cout << r1 << endl;
    // After 1:
    r1.resize(3);
    cout << r1.size() << endl;
    cout << r1 << endl;
    // After 2:
    r1.resize(8);
    cout << r1.size() << endl;
    cout << r1 << endl;
    return 0;
}