#include <bits/stdc++.h>
using namespace std;
void revers(string &sentence)
{
    stringstream ss(sentence);
    string word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << ' ';
    }
}
int main()
{
    string s;
    getline(cin, s);
    revers(s);
    return 0;
}