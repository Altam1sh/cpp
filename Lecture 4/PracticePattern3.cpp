#include <iostream>
using namespace std;
int main()
{
    int n = 10;
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
        while (j <= n - i)
        {
            cout << '@';
            j++;
        }
        int start = n - i + 1;
        while (start)
        {
            cout << '@';
            start--;
        }
        cout << endl;
        i++;
    }
    return 0;
}