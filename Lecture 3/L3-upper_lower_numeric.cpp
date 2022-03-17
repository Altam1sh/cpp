#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter a character : ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "The entered character is uppercase.";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "The entered character is lowercase.";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "The entered character is numeric.";
    }
    return 0;
}