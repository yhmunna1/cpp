#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    student(int r, int c, int sec, char *n)
    {
        roll = r;
        cls = c;
        section = sec;
        strcpy(name, n);
    }
};

student fun()
{
    char name[100] = "Rahim Uddin";
    student r(2, 7, 'A', name);
    return r;
}

int main()
{
    student rahim = fun();

    cout << rahim.name << endl;
    cout << rahim.cls << endl;
    cout << rahim.roll << endl;
    cout << rahim.section << endl;
    return 0;
}