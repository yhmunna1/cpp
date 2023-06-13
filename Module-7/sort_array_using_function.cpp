#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// Sort Start
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}
// Sort End

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    // Sort Start
    sort(a, a + 3, cmp);
    // Sort End

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

// Input:
// Rahim Ullah
// 19
// 95
// Akib Roy
// 43
// 98
// Taskin Ahmed
// 23
// 78