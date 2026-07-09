// program to print intersection of two array
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

    cout<<"Intersection: ";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }

    return 0;
}