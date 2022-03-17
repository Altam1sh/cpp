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
            if ((j == i) || (j + i == 2*n) || i == 1)
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