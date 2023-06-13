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
    Person *munna = new Person("Munna Hossen", 23);
    Person *yeasin = new Person("Yeasin Hossen", 24);

    // munna = yeasin;

    // 1. Single by single copy
    // munna->name = yeasin->name;
    // munna->age = yeasin->age;

    // 2. Same but direct copy
    *munna = *yeasin;

    delete yeasin;
    cout << munna->name << " " << munna->age;
    return 0;
}