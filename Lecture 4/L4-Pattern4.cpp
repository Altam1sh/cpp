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
        //int num = 3; *NOT OPTIMAL SOLUTION*
        while (j <= n)
        {
            cout << n - j + 1 << ' ';
            //cout << num << ' ';
            //num--;
            j++;
        }
        cout << '\n';
        i++;
    }
    return 0;
}