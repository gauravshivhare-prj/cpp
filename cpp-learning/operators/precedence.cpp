// Demonstration of operator precedence in C++.
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 5;
	int c = 2;

	// Multiplication and division are evaluated before addition and subtraction.
	cout << "10 + 5 * 2 = " << a + b * c << '\n';
	cout << "(10 + 5) * 2 = " << (a + b) * c << '\n';

	// Relational operators are evaluated before logical operators.
	cout << "10 > 5 && 5 > 2 = " << (a > b && b > c) << '\n';

	// Parentheses make the intended order explicit.
	cout << "10 / (5 - 2) = " << a / (b - c) << '\n';

	return 0;
}
