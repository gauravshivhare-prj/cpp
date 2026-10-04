#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // addition
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // subtraction
    int difference = b - a;
    cout << "Difference: " << difference << endl;

    // multiplication
    int product = a * b;    
    cout << "Product: " << product << endl;

    // division
    int quotient = b / a;
    cout << "Quotient: " << quotient << endl;

    // modulus
    int remainder = b % a;
    cout << "Remainder: " << remainder << endl;

    return 0;
}