#include <iostream>
using namespace std;
int main()
{
    cout << "Press 1 for Addition" << endl
         << "Press 2 for Subtraction" << endl
         << "Press 3 for Multiplication" << endl
         << "Press 4 for Division" << endl
         << "Press 5 for Remainder(Modulus)";
    int n;
    cout << endl
         << "Enter your choice : ";
    cin >> n;
    int a, b;
    cout << endl
         << "Enter your numbers : ";
    cin >> a >> b;
    int c;
    switch (n)
    {
    case 1:
        cout << "Addition of the two numbers is : " << a + b;
        break;

    case 2:
        if (a > b)
        {
            c = a - b;
        }
        else
        {
            c = b - a;
        }
        cout << "Subtraction of the two numbers is : " << c;
        break;

    case 3:
        cout << "Multiplication of the two numbers is : " << a * b;
        break;

    case 4:
        if (a > b)
        {
            c = a / b;
        }
        else
        {
            c = b / a;
        }
        cout << "Division of the two numbers is : " << c;
        break;

    case 5:
        if (a > b)
        {
            c = a % b;
        }
        else
        {
            c = b % a;
        }
        cout << "Remainder(Modulus) of the two numbers is : " << c;
        break;

    default:
        break;
    }
    return 0;
}