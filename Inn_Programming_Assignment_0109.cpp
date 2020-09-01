
#include <iostream>

int age;

int main()
{
	std::cout << "Please enter your age: " << std::endl;
	std::cin >> age;
	if (age >= 20) {
		std::cout << "You are an adult." << std::endl;
	}

	if (age < 20) {
		std::cout << "You are a teenager." << std::endl;
	}

}