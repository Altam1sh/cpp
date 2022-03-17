#include <iostream>
using namespace std;
int setbits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int answer(int a, int b)
{
    int ans = setbits(a) + setbits(b);
    return ans;
}
main()
{
    int a, b;
    cout << "Enter your values for a and b : ";
    cin >> a >> b;
    int ans = answer(a, b);
    cout << "Number of set bits in a and b are : " << ans;
}