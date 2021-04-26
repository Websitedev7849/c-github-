#include<iostream>
//using namespace std; //includes all the object
using std::cout; // this only include cout object
using std::cin; // this include cin object
int main(){
	
	char name;
	
	cout << "enter your name" << std::endl; // we had to explictly defined namespace of endl, coz we did not include it
	
	cin >> name;
	cout << "this is example of cout" << std::endl;
	
	cout<< "the first letter of your name is " << name;
	
}
