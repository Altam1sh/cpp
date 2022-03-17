#include <iostream>
using namespace std;

int getMax(int array[], int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        //BETTER AND OPTIMIZED
        maximum = max(array[i], maximum);

        // if (array[i] > maximum)
        // {
        //     maximum = array[i];
        // }
    }
    return maximum;
}

int getMin(int array[], int n)
{
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        //BETTER AND OPTIMIZED
        minimum = min(array[i], minimum);

        // if (array[i] < minimum)
        // {
        //     minimum = array[i];
        // }
    }
    return minimum;
}

int main()
{
    int size;
    cout << "Enter the size of your array :- ";
    cin >> size;
    int array1[100];
    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Enter the value for element " << i << " : ";
        cin >> array1[i];
    }
    cout << endl
         << "Your array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array1[i] << "  ";
    }
    cout << endl
         << endl
         << "Minimum value in the array is : " << getMin(array1, size);
    cout << endl
         << "Maximum value in the array is : " << getMax(array1, size);
}