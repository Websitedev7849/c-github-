#include<iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Employee {
public:
	string Name;
	string Title;
	int Age;

	void introduceYourSelf(){
		cout << "Name: " << Name << endl;
		cout << "Title: " << Title << endl;
		cout << "Age: " << Age << endl;
	}

	Employee (string name, string title, int age){
		Name = name;
		Title = title;
		Age = age;
	}

};

int main(){
	Employee employee1("siddharth", "Developer", 20);
	employee1.introduceYourSelf();

	Employee employee2("pawar", "CEO", 20);
	employee2.introduceYourSelf();

	return 0;
}