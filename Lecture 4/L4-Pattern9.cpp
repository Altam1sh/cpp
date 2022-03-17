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
        //int value = i; *NOT AN OPTIMAL SOLUTION*
        while (j <= i)
        {
            //cout << value << ' ';
            //value++;
            cout << i + j - 1 << ' ';
            j++;
        }
        cout << '\n';
        i++;
    }
    return 0;
}