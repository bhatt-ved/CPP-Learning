/*
 * This program asks user to provide 3 numbers and tells whether those numbers are a Pythagorean triplet and which number represents
 * measurement of hypoteneous
 */


#include <iostream>

int main()
{
	int a;
	int b;
	int c;

	std::cout << "Enter length a > ";
	std::cin >> a;
	std::cout << "Enter length b > ";
	std::cin >> b;
	std::cout << "Enter length c > ";
	std::cin >> c;
	
	if (a*a + b*b == c*c)
		std::cout << "The hypotenuse is " << c << "\n";
	
	else if (b*b + c*c == a*a)
		std::cout << "The hypotenuse is " << a << "\n";

	else if (a*a + c*c == b*b)
		std::cout << "The hypotenuse is " << b << "\n";

	else
		std::cout << "This is not a Pythagorean triplet...\n";
	
	return 0;
}


