#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

	string name = "wassupp bro?";

	//appending to string using + operater
	name += " How you doin?";

	cout << name << std::endl;

	name.append("string( which is a object) from this point forword was append using append function");

	cout << name << std::endl;

	return 0;

}