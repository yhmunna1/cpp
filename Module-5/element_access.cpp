#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Home";
    // Access Index:
    cout << s1[0] << endl;      // Old
    cout << s1.at(0) << endl;   // New
    cout << s1.front() << endl; // New

    // Last Index:
    cout << s1[s1.size() - 1] << endl; // Old
    cout << s1.back() << endl;         // New
    return 0;
}