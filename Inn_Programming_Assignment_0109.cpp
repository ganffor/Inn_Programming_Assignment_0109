
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


/*
#include <iostream>
#include <string>
#include <conio.h>

//all statements here are public

int age;
std::string FullName = "";
int a = 10;
int b = 5;
int c = 20;
int z = 10;


int main() {

	//all statements here are private

	system("cls"); //type cls into command prompt to clear screen.
	system("pause"); // prompts the user to press any key to continue.

	if (a > b) {
		std::cout << "A is greater than B" << std::endl;
	}

	if (a == z) {
		std::cout << "A and Z are equal B" << std::endl;
	}

	if (a < b) {
		std::cout << "Nothing happens here" << std::endl;
	}
	else {
		std::cout << "B is not greater than A" << std::endl;
	}

	if (a >= z) {
		std::cout << "A is equal or greater than Z" << std::endl; // if (a > z || a == z) where || equals 'or'
	}

	if (a != b) {
		std::cout << "A is not equal to B" << std::endl;
	}

	std::cout << "Enter your full name : ";
	std::getline(std::cin, FullName); //further reading at learncpp.com 1.5
	std::cout << "Your full name is : " << FullName;
	_getch(); //waits for command from user
}

/*
\t adds a tab (8 spaces)
\n adds a new line (std::endl is recommended due to it clear the buffer)
*/

// two slashes comments a single line
/*
comments
a section
*/