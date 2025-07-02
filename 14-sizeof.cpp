/*
 *  Exploring the use and wonders of sizeof() operator of C/C++
 */

/*  Problem statement:
 *  - Use sizeof() operator to print size of all built-in data types
 *    such as bool, char, int, short int, long int, unsigned int,
 *    float, as well as pointers to all of these data types.
 *  - What did you expect their sizes?  What did the program print?
 *  - A struct definition is given.  Print the sizeof the struct.
 *    Is is the same as what you expected?  If not, why?
 *
 */

#include <iostream>
using namespace std;

struct Strange {
	int a;
	char b;
	int c;
};

void p_print(const char *datatype, int size)
{
	cout << "Size of " << datatype << " is " << size << endl;	
}

int main()
{
	bool boolean;
	char character;
	int integer;
	short int short_int;
	long int long_int;
	unsigned int unsigned_int;
	float floating;
	double dbl;
	
	p_print("boolean", sizeof(boolean));
	p_print("character", sizeof(character));
	p_print("integer", sizeof(integer));
	p_print("short integer", sizeof(short_int));
	p_print("long integer", sizeof(long_int));
	p_print("unsigned integer", sizeof(unsigned_int));
	p_print("floating point number", sizeof(floating));
	p_print("double floating point number", sizeof(dbl));
	p_print("structure", sizeof(struct Strange));


	unsigned_int = floating = integer = 0xffffffff;
	cout  << integer << endl;
	cout  << unsigned_int << endl;
	cout  << floating << endl;
	floating = 0x7fffffff;
	cout  << floating << endl;
	if (floating > unsigned_int)
		cout << "huh!  floating is bigger!!!";
	
		
	return 0;
}
