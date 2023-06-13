#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    student rahim;
    rahim.roll = 1;
    rahim.cls = 10;
    rahim.section = 'C';
    char nm[100] = "Rahim Uddin";
    strcpy(rahim.name, nm);

    cout << rahim.name;

    return 0;
}