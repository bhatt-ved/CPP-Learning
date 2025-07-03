/* One way to find e^x is using this formula:
 *
 *     e^x = 1 + x + x^2/2! + x^3/3! + x^4/4! ......
 *
 *  This program accepts value of x from the user, and calculates the print e^x
 *  It will continue till the accuracy of the given term in the series is more than 0.00001
 *
 */


#include <iostream>

using namespace std;

int main()
{
	double x;
	double e = 1;
	double n = 1;
	double ACC = 0.00001;
	double cur_numer, cur_denom, cur_val;
	cur_denom = 1;
	cout << "Enter power > ";
	cin >> x;
	cur_numer = x;
	do{
		cout << cur_numer << " and " << cur_denom << endl;
		cur_val = cur_numer/cur_denom;
		e += cur_val;
		cur_numer *= x;
		n += 1;
		cur_denom *= n;
	
	} while(cur_val > ACC || cur_val < (ACC*-1));
	
	cout << "e^" << x << " = " << e << endl;
	

	return 0;
}








