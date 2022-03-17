#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int digit = 0, ans = 0, flag = 0;
    while (n != 0)
    {
        digit = n % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            flag = 1;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    if (flag == 1)
    {
        cout << "0";
    }
    else
    {
        cout << ans;
    }
    return 0;
}