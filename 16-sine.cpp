/* One way to find sin of x is using this formula:
 *
 *     sin(x) = x - x^3/3! + x^5/5!  - x^7/7! ......
 *
 *  This program accepts value of x from the user, and calculates the print sin(x)
 *  It will continue till the accuracy of the given term in the series is more than 0.00001
 *
 */

#include <iostream>

using namespace std;

int main()
{
	float sin_x, x, cur_val, cur_numerator;
	float cur_denominator;
	int n;
	cout << "Enter the value of x > ";
	cin >> x;
	cur_numerator = x;
	cur_denominator = 1;
	n = 1;
	sin_x = 0;
	do{
		// cout << cur_numerator << " and " << cur_denominator << "\n";
		cur_val = (cur_numerator)/(cur_denominator);
		sin_x = sin_x + cur_val;
		cur_numerator = (-1) * cur_numerator * x * x;
		cur_denominator = cur_denominator * (n+1) * (n+2);
		n = n + 2;
	
	}while ((cur_val > 0.00001) || (cur_val < -0.00001));
	
	cout << "sin(" << x << ") = " << sin_x << endl;
	
	return 0;
}


