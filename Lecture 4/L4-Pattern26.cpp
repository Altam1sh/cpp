#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i = 1;
    int value = i;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }
        int j = 1;
        int value = 1;
        while (j <= i)
        {
            cout << value << ' ';
            value++;
            j++;
        }
        int secondspace = i - 1;
        while (secondspace)
        {
            cout << secondspace << ' ';
            secondspace--;
        }

        cout << endl;
        i++;
    }
    return 0;
}