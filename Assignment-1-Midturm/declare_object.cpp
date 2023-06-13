#include <bits/stdc++.h>
using namespace std;

class bikes
{
public:
    char brand[100];
    int price;
    char color[100];

    bikes(int p, char *c, char *b)
    {
        price = p;
        strcpy(brand, b);
        strcpy(color, c);
    }
};

int main()
{
    char brand[100] = "Yamaha";
    char color[100] = "Red";
    bikes *yamaha = new bikes(150000, color, brand);

    cout << yamaha->brand << endl;
    cout << yamaha->price << endl;
    cout << yamaha->color << endl;
    return 0;
}