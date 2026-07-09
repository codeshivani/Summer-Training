// program to check function is  power function or not
#include <iostream>
using namespace std;

int power(int base, int exp)
{
    int result = 1;

    for (int i = 1; i <= exp; i++)
        result *= base;

    return result;
}

int main()
{
    int base, exp;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exp;

    cout << "Power = " << power(base, exp);

    return 0;
}