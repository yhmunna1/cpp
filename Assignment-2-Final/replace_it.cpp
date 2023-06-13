#include <bits/stdc++.h>
using namespace std;

string replace(string &S, string &X)
{
    string modified = S;
    while (modified.find(X) != -1)
    {
        modified.replace(modified.find(X), X.length(), "$");
    }
    return modified;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string S, X;
        cin >> S >> X;

        string wordDone = replace(S, X);
        cout << wordDone << endl;
    }

    return 0;
}

// string replaceString(const string &S, const string &X)
// {
//     string modifiedS = S;
//     size_t pos = modifiedS.find(X);

//     while (pos != string::npos)
//     {
//         modifiedS.replace(pos, X.length(), "$");
//         pos = modifiedS.find(X, pos + 1);
//     }

//     return modifiedS;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     for (int i = 0; i < T; i++)
//     {
//         string S, X;
//         cin >> S >> X;

//         string modifiedString = replaceString(S, X);
//         cout << modifiedString << endl;
//     }
//     return 0;
// }