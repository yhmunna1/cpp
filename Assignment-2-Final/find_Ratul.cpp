#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string word = "Ratul";
    int flag = 0;
    stringstream ss(s);
    string find;

    while (ss >> find)
    {
        if (find == word)
        {
            flag++;
        }
    }

    if (flag > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// int findRatul(string sen, string word)
// {
//     int flag = 0;
//     stringstream ss(sen);
//     string find;

//     while (ss >> find)
//     {
//         if (find == word)
//         {
//             flag++;
//         }
//     }

//     return flag;
// }

// int main()
// {
//     string s;
//     getline(cin, s);

//     string word = "Ratul";
//     int matched = findRatul(s, word);

//     if (matched == 1)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }