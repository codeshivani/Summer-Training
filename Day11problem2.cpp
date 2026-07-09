// program to print character frequency
#include<iostream>
#include<map>
using namespace std;

int main()
{
    string str;
    map<char,int> freq;

    cout<<"Enter a string: ";
    cin>>str;

    for(char ch : str)
    {
        freq[ch]++;
    }

    cout<<"Character Frequency:\n";

    for(auto it : freq)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    return 0;
}