#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int digit = 0, ans = 0;
    while (n != 0)
    {
        digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
    return 0;
}