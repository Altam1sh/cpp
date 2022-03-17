#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int n;
    int i = 2;
    int flag = 0;
    cout << "Enter the number to be checked : ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 1)
    {
        cout << "The entered number is not a prime number.";
    }
    else
    {
        cout << "The entered number is a prime number.";
    }
    return 0;
}