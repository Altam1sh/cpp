#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << ' ';
            ch += 1;
            j++;
        }
        cout << '\n';
        i++;
    }
    return 0;
}