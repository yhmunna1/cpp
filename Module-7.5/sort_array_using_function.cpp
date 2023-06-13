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
    else if (a.marks == b.marks)
    {
        if (a.roll < b.roll)
            return true;
        else
            return false;
    }
    else
        return false;
}
// Sort End

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].roll >> a[i].marks;
    }
    // Sort Start
    sort(a, a + n, cmp);
    // Sort End

    for (int i = 0; i < n; i++)
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