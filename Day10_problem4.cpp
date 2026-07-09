// program to print union  of two array
#include<iostream>
using namespace std;

int main()
{
    int n,m;

    cout<<"Enter size of first array: ";
    cin>>n;

    int a[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter size of second array: ";
    cin>>m;

    int b[m];

    cout<<"Enter elements:\n";
    for(int i=0;i<m;i++)
        cin>>b[i];

    cout<<"Union: ";

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    for(int i=0;i<m;i++)
    {
        bool found=false;

        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                found=true;
                break;
            }
        }

        if(!found)
            cout<<b[i]<<" ";
    }

    return 0;
}