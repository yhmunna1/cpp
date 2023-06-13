#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "YH";
    string s2 = "Munna";
    s1 += s2;
    cout << s1 << endl;

    // Same
    string m1 = "YH";
    string m2 = "Munna";
    m1.append(m2);
    cout << m1 << endl;

    // Expand memory:
    string p1 = "YH";
    p1.push_back('M');
    cout << p1 << endl;

    // Delete last index
    string p2 = "YH";
    p2.pop_back();
    cout << p2 << endl;

    // Erase: (koto number, koto gula char)
    string e1 = "Hello";
    e1.erase(2, 2);
    cout << e1 << endl;

    // Replace: (koto number, koto gula, new char)
    string r1 = "Hello";
    r1.replace(4, 2, "ee");
    cout << r1 << endl;

    // Insert: (Same work like Replace)
    string i1 = "Hello";
    i1.insert(4, "oo");
    cout << i1 << endl;

    return 0;
}