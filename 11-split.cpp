/*
 * This program takes one string from the user, splits it with commas, and prints each split string in new lines
 */


#include <iostream>

using namespace std;

int main()
{
	
	char string[64];
	char newstr[64];
	int i = 0;
	int n = 0;
	
	cout << "Enter a string seperated by commas > ";
	cin >> string;
	
	for (int i = 0; i < 64; i++) {
		if ((string[i] != ',') and (string[i] != '\0')) {
			newstr[n] = string[i];
			n++;
		}
		else{
			newstr[n] = '\0';
			n = 0;
			cout << newstr << endl;
		}
	
	}

	return 0;
}
	
	
	
	








