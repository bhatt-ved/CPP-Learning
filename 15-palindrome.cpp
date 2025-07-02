/*
 * This program uses two approaches - one with pointers and one without pointers to determine whether given string is palindrome or not!
 *
 */

#include <iostream>
using namespace std;

bool is_pallindrome(char *input)
{
	// Implement this!
	// You can treat "input" as an array of characters
	
	int i, j;
	i = j = 0;

	while (input[j] != '\0')
		j++;
	j--; // J was pointing to \0, now it's pointing to the last character of string
	
	while (i < j)
	{
		if (input[i] != input[j])
			return false;
		i++;
		j--;
	}
	return true;
}


bool is_pallindrome_ptrs(char *input)
{
	// Implement this!
	
	char *beg, *end;
	beg = input;
	end = input;

	while (*end != '\0')
		end++;
	end--;

	while (beg < end)
	{
		if (*end != *beg)
			return false;
		beg++;
		end--;
	}
	
	return true;
}

char * pretty_print_bool(bool bIn)
{
	static char yes[4] = "Yes";
	static char no[3] = "No";

	if (bIn)
		return yes;
	else
		return no;
}


int main()
{
	// Driver or test program
	char str1[32] = "malayalam";
	char str2[32] = "Foochi Khoochi";
	char str3[32] = "123454321";

	cout << str1 << " is pallindrome? " << pretty_print_bool(is_pallindrome(str1)) << " and pointer method says: " << pretty_print_bool(is_pallindrome_ptrs(str1)) << endl;
	cout << str2 << " is pallindrome? " << pretty_print_bool(is_pallindrome(str2)) << " and pointer method says: " << pretty_print_bool(is_pallindrome_ptrs(str2)) << endl;
	cout << str3 << " is pallindrome? " << pretty_print_bool(is_pallindrome(str3)) << " and pointer method says: " << pretty_print_bool(is_pallindrome_ptrs(str3)) << endl;

	return 0;
}
