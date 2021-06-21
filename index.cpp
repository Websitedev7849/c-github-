#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student {
public:
	string Name;
	int Age;

	Student(string name, int age){
		Name = name;
		Age = age;
	}

	// member function to display object from vector collection
	void display_group(std::vector <Student*> group){

		cout << endl;

		for (int i = 0; i < group.size(); i++){
			cout << endl << "Name :" << group[i] -> Name << endl;
			cout << "Age :" << group[i] -> Age << endl;
		}

		cout << endl;

	}

};

int main()
{

	int option;

	string name;
	int age;

	// vector to store pointers
	std::vector <Student*> group;

	// class object 
	Student* student;


	while(1){

		cout << "1. Insert student Info into vector" << endl;
		cout << "2. Display student Info from vector" << endl;

		cin >> option;

		switch(option){
			case 1:
				cout << endl;
				cout << "Enter Name: "; 
				cin.ignore();
				getline(cin, name);
				cout << "Enter Age ";
				cin >> age;

				// new operater invokes contstructor and allocates memory and returns pointer; 
				student = new Student(name, age);

				group.push_back(student);

				cout << endl << "Information succesfully stored in vector" << endl << endl;

				break;
			
			case 2:

				student -> display_group(group);

				break;


			default:
				cout << "Please Enter Proper Choice" << endl;
		}

		

	}

	return 0;
}