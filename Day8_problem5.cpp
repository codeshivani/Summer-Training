// program to print reverse string using recursion
#include <iostream>
#include <string>
using namespace std;

void reverse(string str, int index)
{
    if (index < 0)
        return;

    cout << str[index];
    reverse(str, index - 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str, str.length() - 1);

    return 0;
}