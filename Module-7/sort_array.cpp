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
    // Sort Start
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i].roll > a[j].roll)
            {
                swap(a[i], a[j]);
            }
        }
    }
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