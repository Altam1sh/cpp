#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int i = 1;
    int num = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << num << ' ';
            j++;
            num++;
        }
        cout << '\n';
        i++;
    }
    return 0;
}