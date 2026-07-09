//program to print query frequency count
#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n,x,q;

    map<int,int> freq;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
    {
        cin>>x;
        freq[x]++;
    }

    cout<<"Enter number to search: ";
    cin>>q;

    cout<<"Frequency of "<<q<<" = "<<freq[q];

    return 0;
}