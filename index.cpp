#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){

	string name = "abcdefghijklmonpqrstuvwxyz";

	cout << "the string is " << name << std::endl; 

	cout << "length of string is " << name.length() << std::endl;

	cout << "last letter of string is" << std::endl;

	cout << name[name.length() - 1] << std::endl;

	return 0;

}