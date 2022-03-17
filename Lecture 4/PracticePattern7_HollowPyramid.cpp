#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= ((2 * n) - 1))
        {
            if ((j + i == n + 1) || (j - i == n-1) || i == n)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}