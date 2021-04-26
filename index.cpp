#include<iostream>
using std::cout; // this only include cout object
using std::cin; // this include cin object

namespace customNamespace{
	int height;
}
	
int main(){
	

	int height = 5;
	customNamespace::height = 6;
	
	cout << "height outside namespace CustomNamespace is " << height << std::endl;
	cout << "height inside namespace CustomNamespace is " << customNamespace::height;
}
