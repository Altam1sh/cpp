#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << ' ';
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << '@';
            j++;
        }
        int start = i - 1;
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