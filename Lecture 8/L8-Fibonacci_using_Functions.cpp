#include <iostream>
using namespace std;
void fibbo(int n)
{
    int f1 = 0, f2 = 1, f3 = 0;
    if (n == 1)
    {
        cout << f1;
    }
    else if (n == 2)
    {
        cout << f2;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        cout << f3;
    }
}
main()
{
    int n;
    cout << "Enter the number you want to print from the series : ";
    cin >> n;
    fibbo(n);
}