#include <iostream>

using namespace std;

#define MAX_STUDENTS 4

int main()
{
	char name[32];
	int nums[MAX_STUDENTS];
	int totalMarks = 0;

	char *pName;
	int *pNum;

	pName = name;  // same as pName = &name[0]
	pNum = nums;   // same as pNum = &nums[0]

	cout << "Give me a name! ";
	cin >> name;

	for (int i=0; i<MAX_STUDENTS; i++) {
		cout << "Enter marks for student #" << i << ": ";
		cin >> nums[i];
	}

	for (int i=0; i<MAX_STUDENTS; i++) {
		cout << "Marks of student #" << i << " is: " << *pNum << endl;
		totalMarks += *pNum;
		pNum++;
	}

	cout << "Average Marks: " <<  float(totalMarks)/ MAX_STUDENTS << endl;

	return 0;
}

