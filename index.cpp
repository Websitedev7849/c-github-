#include<iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Employee {
public:
	string name;
	string title;
	int age;
};

int main(){
	Employee employee1;
	employee1.name = "siddharth";
	employee1.title = "Developer";
	employee1.age = 20;

	cout << "Name: " << employee1.name << endl;
	cout << "Title: " << employee1.title << endl;
	cout << "Age: " << employee1.age << endl;

	return 0;
}