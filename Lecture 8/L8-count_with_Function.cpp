#include <iostream>
using namespace std;
void count(int n)   //FUNCTION NOT RETURNING ANYTHING JUST PRINTING THE VALUE
{
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    count(n);
}