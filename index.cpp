#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

	string name = "wassupp bro?";

	cout << name << std::endl;
	cout << "please enter your name" << std::endl;
	getline(cin, name);
	cout << name;
	
	return 0;

}