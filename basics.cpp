// Basic C++ example: input, output, data types, and arithmetic.
#include <iostream>
#include <string>

int main() {
	std::string name;
	int age;
	double height;
	char grade;
	const int currentYear = 2026;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << "Enter your height in meters: ";
	std::cin >> height;

	std::cout << "Enter your grade letter: ";
	std::cin >> grade;

	int birthYear = currentYear - age;
	double heightInCentimeters = height * 100.0;

	std::cout << "\n--- Your Details ---\n";
	std::cout << "Name: " << name << '\n';
	std::cout << "Age: " << age << '\n';
	std::cout << "Approximate birth year: " << birthYear << '\n';
	std::cout << "Height: " << heightInCentimeters << " cm\n";
	std::cout << "Grade: " << grade << '\n';

	return 0;
}
