#include<iostream>
using namespace std;

class Employee {
private:
	string Name;
	string Title;
	int Age;

public:

	//getters and setters
	void setName(string name){
		Name = name;
	}

	string getName(){
		return Name;
	}

	void setTitle(string title){
		Title = title;
	}

	string getTitle(){
		return Title;
	}
	
	void setAge(int age){
		Age = age;
	}

	int getAge(){
		return Age;
	}

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

	employee1.setAge(21);
	cout << employee1.getName() << " is now " << employee1.getAge() << " years old." << endl; 

	return 0;
}