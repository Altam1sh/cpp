#include <iostream>
using namespace std;
int update(int x)
{
    int ans = x * x;
    return ans;
}
int main()
{
    int a = 14;
    a = update(a);
    cout << a;
}