#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
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
        cout << endl;
        i++;
    }
    while (k <= n)
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
        cout << endl;
        k++;
    }
    return 0;
}