#include<iostream>
using namespace std;

int main(){
	int *ptr = NULL;
	ptr = new int;
	
	*ptr = 56;
	
	cout << "the address of ptr is " << ptr << endl;
	cout << "the value at ptr is " << *ptr << endl;
	
	return 0;
}
