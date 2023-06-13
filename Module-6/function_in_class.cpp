#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int math;
    int english;

    Person(string nm, int ag, int mat, int eng)
    {
        name = nm;
        age = ag;
        math = mat;
        english = eng;
    }
    int result()
    {
        return math + english;
    }
};

int main()
{
    Person munna("Munna", 23, 95, 80);
    cout << munna.result();
    return 0;
}