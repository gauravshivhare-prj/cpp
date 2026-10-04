#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "Initial value of a: " << a << endl;

    // Post-increment
    a++;  // use first then increment
    cout << "After post-increment: " << a << endl;

    // Pre-increment
    ++a; // increment first then use
    cout << "After pre-increment: " << a << endl;

    // Post-decrement
    a--; // use first then decrement
    cout << "After post-decrement: " << a << endl;

    // Pre-decrement
    --a;    // decrement first then use
    cout << "After pre-decrement: " << a << endl;

    return 0;
}