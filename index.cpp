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

	void introduceYourSelf(){
		cout << "Name: " << name << endl;
		cout << "Title: " << title << endl;
		cout << "Age: " << age << endl;
	}

};

int main(){
	Employee employee1;
	employee1.name = "siddharth";
	employee1.title = "Developer";
	employee1.age = 20;

	employee1.introduceYourSelf();

	return 0;
}