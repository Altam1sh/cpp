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
        while (j <= i)
        {
            cout << value << ' ';
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}