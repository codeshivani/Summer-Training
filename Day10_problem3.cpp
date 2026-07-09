// program to print count distinct elements
#include<iostream>
using namespace std;

int main()
{
    int n,count=0;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        bool found=false;

        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                found=true;
                break;
            }
        }

        if(!found)
            count++;
    }

    cout<<"Distinct Elements = "<<count;

    return 0;
}
