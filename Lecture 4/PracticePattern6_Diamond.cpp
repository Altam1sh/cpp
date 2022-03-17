#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // cout << "Enter the number : ";
    // cin >> n;
    int i = 1;
    int k = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "@";
            j++;
        }
        int star2 = i - 1;
        while (star2)
        {
            cout << "@";
            star2--;
        }
        cout << endl;
        i++;
    }
    while (k < n)
    {
        int space = k;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= n - k)
        {
            cout << "@";
            j++;
        }
        int star2 = n - k - 1;
        while (star2)
        {
            cout << "@";
            star2--;
        }
        cout << endl;
        k++;
    }
    return 0;
}