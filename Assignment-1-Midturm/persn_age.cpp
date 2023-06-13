#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(float h, int a, char *n)
    {
        height = h;
        age = a;
        strcpy(name, n);
    }
};

int main()
{
    char name[100] = "Munna";
    char name1[100] = "Rahim";
    Person *munna = new Person(5.10, 23, name);
    Person *rahim = new Person(5.8, 28, name1);

    if (munna->age > rahim->age)
    {
        cout << munna->name << endl;
    }
    else
    {
        cout << rahim->name << endl;
    }
    return 0;
}