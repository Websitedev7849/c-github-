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

};

int main()
{

	std::vector<Student*> group;

	Student* student = new Student("siddharth", 18);

	cout << student -> Name << " " << student -> Age << endl;
	group.push_back(student);

	student = new Student("pranjal", 23);
	cout << student -> Name << " " << student -> Age << endl;
	group.push_back(student);

	cout << "\n Object Pointer are stored in the vector" << endl;
	for(int i = 0; i < group.size(); i++){
		cout << group[i] -> Name << " " << group[i] -> Age << endl;
	}

	return 0;
}