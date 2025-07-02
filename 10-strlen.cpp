/*
 * Learning to work with Strings!
 *
 * This program takes input from the user - a string, and by iterating over it, counts the length.
 *
 * Use the standard strlen() function to verify that your answer is correct.
 *
 */


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char string[32];
	cout << "Enter a string of max length 32 character > ";
	cin >> string;
	int len = 0;	
	int actual_len = strlen(string);

	while (string[len] != '\0')
		len++;
	
	cout << "Calculated length is " << len << " and the real length is " << actual_len << endl;
	return 0;
}
			
	
