#include <iostream>
using namespace std;
int main()
{
    int n = 875;
    int digit = 0;
    int sum = 0;
    int product = 1;
    do
    {
        digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n = n / 10;
    } while (n != 0);
    cout << "Sum of digits : " << sum << "\n";
    cout << "Product of digits : " << product;
    cout << "Result : " << product - sum;
    return 0;
}