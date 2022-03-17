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
        int j = 1;
        while (j <= i)
        {
            cout << "#";
            j++;
        }
        cout << endl;
        i++;
    }
    while (k <= n)
    {
        int j = 1;
        while (j <= n - k)
        {
            cout << "#";
            j++;
        }
        cout << endl;
        k++;
    }
    return 0;
}