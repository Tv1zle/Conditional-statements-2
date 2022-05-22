
#include <string>
#include <iostream>

int main()
{
	//Task 1
	char symbol;
	std::cout << "Symbol is ";
	std::cin >> symbol;

	if (static_cast<int>(symbol) >= 48 && static_cast<int>(symbol) <= 57) {
		std::cout << "This is number \n \n";
	}
	else if (symbol == 'a' || symbol == 'b' || symbol == 'c' || symbol == 'd' || symbol == 'e' || symbol == 'f' || symbol == 'g' || symbol == 'h' || symbol == 'i' || symbol == 'j' || symbol == 'k' || symbol == 'l' || symbol == 'm' || symbol == 'n' || symbol == 'o' || symbol == 'p' || symbol == 'q' || symbol == 'r' || symbol == 's' || symbol == 't' || symbol == 'u' || symbol == 'v' || symbol == 'w' || symbol == 'x' || symbol == 'y' || symbol == 'z' ||
		symbol == 'A' || symbol == 'B' || symbol == 'C' || symbol == 'D' || symbol == 'E' || symbol == 'F' || symbol == 'G' || symbol == 'H' || symbol == 'I' || symbol == 'J' || symbol == 'K' || symbol == 'L' || symbol == 'M' || symbol == 'N' || symbol == 'O' || symbol == 'P' || symbol == 'Q' || symbol == 'R' || symbol == 'S' || symbol == 'T' || symbol == 'U' || symbol == 'V' || symbol == 'W' || symbol == 'X' || symbol == 'Y' || symbol == 'Z'){
		std::cout << "This is letter \n \n";
	}
	else {
		std::cout << "This is punctuation mark \n \n";
	}



	//Task 2
	int Number;
	std::cout << "Number = ";
	std::cin >> Number;


	if (Number % 3 == 0 && Number % 5 == 0 && Number % 7 == 0) {
		std::cout << "The number is a multiple of 3, 5 and 7 \n \n";
	}
	else {
		std::cout << "The number is not a multiple \n \n";
	}



	//Task 3
	int NumberWithFourDigits;
	std::cout << "Number with 4 digits maximum = ";
	std::cin >> NumberWithFourDigits;


	if (NumberWithFourDigits >= 1000 && NumberWithFourDigits <= 9999) {
		std::cout << "Number with 4 digits \n \n";
	}
	else if (NumberWithFourDigits >= 100 && NumberWithFourDigits <= 999) {
		std::cout << "Number with 3 digits \n \n";
	}
	else if (NumberWithFourDigits >= 10 && NumberWithFourDigits <= 99) {
		std::cout << "Number with 2 digits \n \n";
	}
	else {
		std::cout << "Number with 1 digit \n \n";
	}



	//Task 4
	int Palindrom;
	std::cout << "Five-digit number = ";
	std::cin >> Palindrom;


	if (Palindrom / 10000 % 10 == Palindrom % 10 && Palindrom / 10 % 10 == Palindrom / 1000 % 10) {
		std::cout << "This number is a palindrome \n \n";
	}
	else {
		std::cout << "This number is not a palindrome \n \n";
	}



	//Task 5
	int leftx;
	std::cout << "Top left corner coordinates (X) ";
	std::cin >> leftx;


	int lefty;
	std::cout << "Top left corner coordinates (Y) ";
	std::cin >> lefty;


	int rightx;
	std::cout << "Bottom right corner coordinates (X) ";
	std::cin >> rightx;


	int righty;
	std::cout << "Bottom right corner coordinates (Y) ";
	std::cin >> righty;


	int x;
	std::cout << "X = ";
	std::cin >> x;


	int y;
	std::cout << "Y = ";
	std::cin >> y;


	if (x <= leftx && x >= rightx && y <= lefty && y >= righty) {
		std::cout << "Point belongs to rectangle \n \n";
	}
	else {
		std::cout << "The point does not belong to the rectangle \n \n";
	}




}
