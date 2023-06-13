#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    int result()
    {
    }
};

int main()
{
    Person munna("Munna", 23);
    cout << munna.name << " " << munna.age;
    return 0;
}