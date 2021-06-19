#include <iostream>
#include "./includes/credentials.h"
using std::cout;
using std::endl;

// task.cpp contains definations
//task.h contains declarations
// if we want to include custom header file we use "" instead of <>
// we also need to include header in task.cpp

// use following command to compile code in terminal
// g++ includes/credentials.cpp index.cpp -o index.exe

int main(){
	cout << "My name is " << get_name() << " , i am " << get_age() << " years old." << endl;
	cout << "I got " << get_percentage() << "\% in exam." << endl;
	return 0;
}
