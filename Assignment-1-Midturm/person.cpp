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
    Person *munna = new Person(5.10, 23, name);

    cout << munna->name << endl;
    cout << munna->age << endl;
    cout << munna->height << endl;
    return 0;
}