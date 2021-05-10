#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 56;
	
	cout << "address of ptr is " << ptr << endl;
	cout << "value at ptr is " << *ptr << endl;
	
	
	return 0;
}
