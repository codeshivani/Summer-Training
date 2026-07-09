// program to print most frequent element
#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n,x;
    map<int,int> freq;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
    {
        cin>>x;
        freq[x]++;
    }

    int element,maxFreq=0;

    for(auto it:freq)
    {
        if(it.second>maxFreq)
        {
            maxFreq=it.second;
            element=it.first;
        }
    }

    cout<<"Most Frequent Element = "<<element<<endl;
    cout<<"Frequency = "<<maxFreq;

    return 0;
}