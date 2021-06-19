#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int data[] = {0, 1, 2, 3};

	//data return address of first value of array 
	for(int i = 0; i < 4; i++){
		cout << *(data + i) << endl;
	}
	


	cout << endl;
	
	return 0;
}
