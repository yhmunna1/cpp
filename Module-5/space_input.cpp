#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    // cin.ignore() & getchar are same. They ignore one char.
    cin.ignore();
    // getchar();
    string s;
    // cin >> s;
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    return 0;
}