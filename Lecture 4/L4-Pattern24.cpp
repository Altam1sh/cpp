#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << ' ';
            space--;
        }
        int j = 1;
        int value = i;
        while (j <= n - i)
        {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}