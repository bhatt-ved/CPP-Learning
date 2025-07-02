/* Our own string class!
 */

#include <iostream>
#include <string.h>
using namespace std;

#include "my_string.h"


String::String()
{
	// Default constructor
	buf = NULL;
	len = 0;
}

String::~String()
{
	// Default constructor
	if (buf != NULL)
		delete buf;
}

String::String(const char* input)
{
	if (input != NULL) {
		len = strlen(input) + 1;
		buf = new char[len];
		strcpy(input, buf);
	} else {
		buf = NULL;
		len = 0;
	}
}

String::String(const String &input)
{
	if (input.len > 0) {
		len = input.len;
		buf = new char[len];
		strcpy(input.buf, buf);
	} else {
		buf = NULL;
		len = 0;
	}
}

int String::length()
{
	if (buf == NULL)
		return 0;
	else
		return (len - 1);
}

void String::init_from_console()
{
	// Prompts user for input and initializes this class

	// First free any data held by the String
	if (len > 0) {
		delete buf;
		buf = NULL;
		len = 0;
	}
	cout << "Enter a string: ";
	char local[256];
	cin >> local;
	this->len = strlen(local) + 1;
	this->buf = new char[this->len];
	strcpy(local, this->buf);
}

const char* String::get()
{
	return this->buf;
}

void String::print()
{
	if (buf == NULL)
		cout << endl;
	else
		cout << buf << endl;
}


int main()
{
	String s1;

	cout << s1.length();

	s1.init_from_console();

	String s2(s1);

	s1.print();
	s2.print();

	String *s3 = new String("Hello world!");
	s3->print();

	return 0;
}


