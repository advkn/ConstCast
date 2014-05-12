/* const_cast:
	1. const_cast is used when it is required to convert a const to a non-const.
	2. Also reffered as "casting away constness".
*/

#include <iostream>
using namespace std;

class MyClass {
	int data1;

public:
	MyClass() {
		data1 = 100;
	}
	void print() {
		cout << data1 << endl;
	}
};

//function that will access the print() function through a MyClass pointer
void myFunc(MyClass* ptr) {
	ptr->print();
}

void main() {

	const MyClass* ptr = new MyClass();
	//myFunc(ptr);	//generates compiler error because myFunc does NOT accept const pointers

	MyClass* ptr1 = const_cast<MyClass*>(ptr);

	myFunc(ptr1);

	getchar();
}