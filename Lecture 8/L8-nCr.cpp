#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    int ans = 0;
    int Nans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n != 0)
        {
            Nans = Nans * i;
        }
        else
        {
            Nans = 1;
        }
    }
    cout << "n factorial : " << Nans;
    int Rans = 1;
    for (int i = 1; i <= r; i++)
    {
        if (r != 0)
        {
            Rans = Rans * i;
        }
        else
        {
            Rans = 1;
        }
    }
    cout << endl
         << "r factorial : " << Rans;
    int NRans = 1;
    for (int i = 1; i <= n - r; i++)
    {
        if (n - r != 0)
        {
            NRans = NRans * i;
        }
        else
        {
            NRans = 1;
        }
    }
    cout << endl
         << "n-r factorial : " << NRans;
    ans = Nans / (Rans * (NRans));
    return ans;
}

int main()
{
    int n, r, ans = 0;
    cout << "Enter n and r values : ";
    cin >> n >> r;
    ans = nCr(n, r);
    cout << endl
         << "nCr : " << ans;
}