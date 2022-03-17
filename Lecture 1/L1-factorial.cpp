#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int n;
    cout << "Enter the number for which you want the factorial : ";
    cin >> n;
    int fact = 1;
    if (n == 0)
    {
        cout << "Factorial of " << n << " is " << 1;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " is " << fact;
    }
}