#include <iostream>
using namespace std;
void callArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "   ";
    }
}
int main()
{
    int array1[5] = {0, 2, 3, 4, 5};
    int array2[10] = {0};
    int array3[15] = {2, 5, 6, 3, 2, 5, 9};
    cout << "Array 3 values are : " << endl;
    callArray(array3, 10);
    int n = 10;
    cout << endl
         << "Array 1 values are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << "   ";
    }
}