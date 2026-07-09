// progam to print word frequeny
#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    string word;
    map<string,int> freq;

    cout<<"Enter number of words: ";
    cin>>n;

    cout<<"Enter words:\n";

    for(int i=0;i<n;i++)
    {
        cin>>word;
        freq[word]++;
    }

    cout<<"Word Frequency:\n";

    for(auto it:freq)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    return 0;
}