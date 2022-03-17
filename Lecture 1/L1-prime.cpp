#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "The entered number is prime";
    }
    else
    {
        cout << "The entered number is not prime";
    }
    return 0;
}