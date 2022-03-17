#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int flag = 0, ans = 0;
    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2, i);
        if (ans == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}