#include <iostream>
using namespace std;

union MyUnion{
	double real;
	int integer;
	char character;
};


int main(){
	MyUnion variable;
	variable.character = 'A';
	cout << "Character: " << variable.character << endl;
	cout << "Integer:   " << variable.integer << endl;
	cout << "Real:      " << variable.real << endl;

	cout << "- - - - - - - - Addresses - - - - - - - " << endl;

	cout << "variable:  " << &variable << endl;
	cout << "Character: " << &variable.character << endl;
	cout << "Integer:   " << &variable.integer << endl;
	cout << "Real:      " << &variable.real << endl;

	return 0;
}


