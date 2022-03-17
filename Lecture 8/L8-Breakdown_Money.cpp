#include <iostream>
using namespace std;
int main()
{
    int n = 12330;
    int m = 0;
    switch (1)
    {
    case 1:
        m = n;
        cout << "Number of 100 rupee notes needed are : " << m / 100 << endl;
        m = n % 100;

    case 2:
        cout << "Number of 50 rupee notes needed are : " << m / 50 << endl;
        m = n % 50;

    case 3:
        cout << "Number of 20 rupee notes needed are : " << m / 20 << endl;
        m = n % 20;

    case 4:
        cout << "Number of 1 rupee notes needed are : " << m / 1;

    default:
        break;
    }
    return 0;
}