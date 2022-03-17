#include <iostream>
using namespace std;
void ap(int n)
{
    int ap = 3 * n + 7;
    cout << ap;
}
main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    ap(n);
}