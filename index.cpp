#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

// vectors are dynamic array and have contiguos memory allocation


int main()
{
	cout << "this is vectors" << endl;

	// <int> defines the type of vector to created
	std::vector<int> data = {0, 1, 2};
	
	cout << "last element of data before push_back method" << endl;
	cout << data[data.size() - 1]  << endl;

	data.push_back(3);

	cout << "last element of data after push_back method" << endl;
	cout << data[data.size() - 1]  << endl;

	return 0;
}
