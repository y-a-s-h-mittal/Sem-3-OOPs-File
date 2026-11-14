#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try
    {
        if (index < 0 || index >= 5)
        {
            throw index;
        }
        cout << "Element at index " << index << " is: " << arr[index];
    }
    catch (int x)
    {
        cout << "Exception caught!";
        cout << "\nArray index " << x << " is out of bounds.";
    }

    return 0;
}
