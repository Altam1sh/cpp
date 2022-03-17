#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int bit = 0, ans = 0, i = 0;
    while (n != 0)
    {
        bit = n % 10;
        ans = (bit * pow(2, i)) + ans;
        i++;
        n = n / 10;
    }
    cout << ans;
    return 0;
}