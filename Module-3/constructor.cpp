#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    student(int r, int c, int s, char *n)
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

int main()
{
    student rahim(1, 9, 'A', "Rahim Uddin");
    student karim(2, 9, 'A', "Karim Uddin");

    cout << "Name: " << rahim.name << endl;
    cout << "Roll: " << rahim.roll << endl;
    cout << "Class: " << rahim.cls << endl;
    cout << "Section: " << rahim.section << endl;

    return 0;
}