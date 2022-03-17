#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "@ ";
            j++;
        }
        cout << '\n';
        i++;
    }
    return 0;
}