/*
 *  Playing with struct
 *
 *  Define a structure of "Student" with first name, last name,
 *  age, weight, and height.  Allocate memory for 4 students (on stack)
 *  iterate over them and prompt user to provide the data for 4 students.
 *  Use array and index operator for populating data in your structs.
 *
 *  Then, using pointer to struct, find average age, weight, and height.
 *
 */


#include <iostream>

using namespace std;

int main()
{
	struct Student {
		char first_name[64];
		char last_name[64];
		int age;
		float weight;
		float height;
	};


	struct Student students_list[4];
	struct Student *pStudent;
	
	pStudent = students_list;

	for (int i = 0; i < 4; i++){
		cout << "What is your first name? > ";
		cin >> pStudent->first_name;
		
		cout << "What is your last name? > ";
		cin >> pStudent->last_name;
		
		cout << "What is your age? > ";
		cin >> pStudent->age;
		
		cout << "What is your weight(in kgs)? > ";
		cin >> pStudent->weight;
		
		cout << "What is your height(in cm)? > ";
		cin >> pStudent->height;
	
		cout << "Student 1 is " << pStudent->first_name << " " << pStudent->last_name << ". They are " << pStudent->age << " years old. Their height and weight is " << pStudent->weight << "kgs and " << pStudent->height << "cm." << endl;
		
		pStudent++;	
	}
	
	float avg_height, avg_weight, avg_age;

	pStudent = students_list;

	for (int i = 0; i < 4; i++) {
		avg_height += pStudent->height;
		avg_weight += pStudent->weight;
		avg_age += pStudent->age;
		pStudent++;
	}	
	
	avg_height = avg_height/4;
	avg_weight = avg_weight/4;
	avg_age = avg_age/4;

	cout << "Average weight is " << avg_weight << "kgs. Average height is " << avg_height << "cm. Average age is " << avg_age << " years old." << endl;


	return 0;
}




