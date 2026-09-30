#include <iostream>
using namespace std;

int main() {
    // 1. Array Declaration and Initialization
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "--- 1. Accessing Array Elements ---" << endl;
    cout << "First element (index 0): " << arr[0] << endl;
    cout << "Last element (index 4): " << arr[4] << endl;

    // 2. Modifying an element
    arr[1] = 99;
    cout << "Updated element at index 1: " << arr[1] << endl;

    // 3. Traversing (printing all elements using loop)
    cout << "\n--- 2. Traversing Array ---" << endl;
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Taking array input from the user
    cout << "\n--- 3. User Input & Array Operations ---" << endl;
    int n;
    cout << "Enter number of elements (1 to 10): ";
    cin >> n;

    int userArr[10];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> userArr[i];
    }

    // 5. Calculating Sum and finding Maximum element
    int sum = 0;
    int maxVal = userArr[0];

    for (int i = 0; i < n; i++) {
        sum += userArr[i];
        if (userArr[i] > maxVal) {
            maxVal = userArr[i];
        }
    }

    cout << "Sum of elements = " << sum << endl;
    cout << "Maximum element = " << maxVal << endl;

    return 0;
}
