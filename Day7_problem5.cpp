// program to traverse using pointer
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *ptr = arr;

    cout << "Array Elements:\n";

    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";

    return 0;
}