#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    // Maximum Marks find
    Student max;
    max.marks = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks > max.marks)
        {
            max = a[i];
        }
    }
    cout << max.name << " " << max.roll << " " << max.marks << endl;

    // Minimum Marks find
    Student min;
    min.marks = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks < min.marks)
        {
            min = a[i];
        }
    }
    cout << min.name << " " << min.roll << " " << min.marks << endl;
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