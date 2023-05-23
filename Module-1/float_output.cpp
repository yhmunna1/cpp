#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    cin >> a;
    cout << a << endl;
    // Show two digit after point.
    cout << fixed << setprecision(2) << a;
    return 0;
}