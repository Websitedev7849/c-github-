#include <iostream>
#include "./Header Files/task.h"
using std::cout;
using std::endl;

// task.cpp contains definations
//task.h contains declarations
// if we want to include custom header file we use "" instead of <>
// we also need to include header in task.cpp

int main(){
	cout << "My lucky number is " << my_lucky_number() << endl;
	return 0;
}
