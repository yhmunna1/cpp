#include <bits/stdc++.h>
using namespace std;

int calculateEquationResult(int X, int N)
{
    int result = 0;

    for (int i = 0; i <= N; i += 2)
    {
        result += X - 1;
        X *= X;
    }

    return result;
}

int main()
{
    int X, N;
    cin >> X >> N;

    int equationResult = calculateEquationResult(X, N);
    cout << "S = " << equationResult << endl;
    return 0;
}