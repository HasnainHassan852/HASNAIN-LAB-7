#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    cout << "Array elements are:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}
