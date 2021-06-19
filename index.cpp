#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

// vectors are dynamic array and have contiguos memory allocation

// IMPORTANT
// whenever element is pushed into vector, it reallocates all the element to new memory location ...
// with new pushed element

void print_vector(std::vector<int> data){

	// print value
	for (int i = 0; i < data.size(); i++){
		cout << data[i] << "\t";
	}
	
	cout << endl;
	
	//print address of elements and typecast addr to int
	for (int i = 0; i < data.size(); i++){
		cout << (int) &data[i] << "\t";
	}

	cout << endl << endl;
}

int main()
{
	cout << "this is vectors" << endl;

	// <int> defines the type of vector to created
	std::vector<int> data = {0, 1, 2};
	
	data.push_back(3);
	print_vector(data);
	
	data.push_back(4);
	print_vector(data);
	return 0;
}
