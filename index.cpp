#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

// vectors are dynamic array and have contiguos memory allocation

void print_vector(std::vector<int> data){


	for (int i = 0; i < data.size(); i++){
		cout << data[i] << "\t";
	}
	cout << endl;

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
