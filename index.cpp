#include<iostream>
using namespace std;

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

// Developers class inherits properties of Employee class publically
// constructor inherited from Employee handles assignment of inherited properties

class Developer : public Employee{
public:
	string FavouriteProgrammingLang;
	Developer(string name, string title, int age, string favouriteProgrammingLang)
		: Employee(name, title, age)
	{
		FavouriteProgrammingLang = favouriteProgrammingLang;
	}
};

int main(){
	
	Developer d = Developer("siddharth", "developer", 20, "javascript");
	cout << d.Name << "\'s favourite programming language is " << d.FavouriteProgrammingLang << endl;

	return 0;
}