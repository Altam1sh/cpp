#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << '\n';
        i++;
    }
    return 0;
}