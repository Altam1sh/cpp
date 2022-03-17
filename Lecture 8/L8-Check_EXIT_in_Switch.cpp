#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    while (1)
    {
        switch (n)
        {
        case 1:
            cout << "Case 1";
            exit(0);    //EXIT to get out of this INFINITE LOOP
            break;

        default:
            break;
        }
        cout << "Something" << endl;
    }
    return 0;
}
