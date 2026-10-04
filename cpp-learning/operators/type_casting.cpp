#include <iostream>
using namespace std;

int main() {

    int a = 45;
    float b = 45.46;

    // int -> float
    cout << "The value of a is: " << float(a) << endl;

    // float -> int
    cout << "The value of b is: " << int(b) << endl;

    // Store converted value
    int c = int(b);

    cout << "Converted value of b: " << c << endl;

    return 0;
}