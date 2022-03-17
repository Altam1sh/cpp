#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 7;
    int digit = 0, bit = 0, initial_binary = 0, i = 0, j = 0, ans = 0;
    while (n != 0)
    {
        bit = n & 1;
        initial_binary = (bit * pow(10, i)) + initial_binary;
        i++;
        n = n >> 1;
    }
    cout << "Binary representation of the entered number is : " << initial_binary << endl;
    while (initial_binary != 0)
    {
        digit = !(initial_binary % 10);
        ans = (digit * pow(2, j)) + ans;
        j++;
        initial_binary = initial_binary / 10;
    }
    cout << "Complement of the entered number is : " << ans;
    return 0;
}