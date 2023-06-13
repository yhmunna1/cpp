#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = i + 1;
    }
    delete[] ar;
    return 0;
}