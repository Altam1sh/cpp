#include <iostream>
using namespace std;
int arraySum(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of your array :- ";
    cin >> size;
    int array[20];
    cout << endl
         << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Enter the element " << i << " of the array : ";
        cin >> array[i];
    }
    cout << endl
         << "Your entered array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "   ";
    }
    cout << endl
         << "Sum of the elements in the array is : " << arraySum(array, size);
}