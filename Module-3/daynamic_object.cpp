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

int main()
{
    char name[100] = "Rahim Uddin";
    // student rahim = fun();
    student *rahim = new student(2, 7, 'A', name);

    cout << rahim->name << endl;
    cout << rahim->cls << endl;
    cout << rahim->roll << endl;
    cout << rahim->section << endl;
    return 0;
}