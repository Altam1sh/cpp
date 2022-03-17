#include <iostream>
using namespace std;
bool search(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int key;
    cout << "Enter the key(The number to be searched in the array) :- ";
    cin >> key;
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool ans = search(array, 10, key);
    if (ans)
    {
        cout << "Key was found";
    }
    else
    {
        cout << "Key was not found";
    }
}