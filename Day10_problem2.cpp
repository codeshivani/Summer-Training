// program to print unique element
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Unique Elements are:\n";

    for(int i=0;i<n;i++)
    {
        int count=0;

        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count==1)
            cout<<arr[i]<<" ";
    }

    return 0;
}