/* One way to find cosin of x is using this formula:
 *
 *     cos(x) = 1 - x^2/2! + x^4/4!  - x^6/6! ......
 *
 *  This program accepts value of x from the user, and calculates the print cos(x)
 *  It will continue till the accuracy of the given term in the series is more than 0.00001
 *
 */


#include <iostream>

using namespace std;


int main()
{
	float x, cos_x, numer, denom, cur_val, ACC;
	int n;
	ACC = 0.00001;
	cout << "Enter value of  x > ";
	cin >> x;
	numer = x * x;
	denom = 2;
	n = 2;
	cos_x = 1;

	do{
		cur_val = numer/denom;
		cos_x -= cur_val;
		numer = (-1) * numer * x * x;
		denom = denom * (n+1) * (n+2);
		n += 2;
	}while((cur_val > ACC) || (cur_val < -ACC));
	
	cout << "Cos " << x << " = " << cos_x << endl;
	return 0;
}












