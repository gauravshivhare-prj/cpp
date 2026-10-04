#include <iostream>
using namespace std;

int main() {

    int x = 10;

    // y is a reference (another name) for x
    int& y = x;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // Changing y also changes x
    y = 20;

    cout << "After changing y:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // Changing x also changes y
    x = 30;

    cout << "After changing x:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}