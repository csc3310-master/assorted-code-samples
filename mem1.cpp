#include <iostream>
using namespace std;

unsigned short int kappa = 0x1FF;

double Hope(double tao){
	static int lambda = 0;
	lambda++;
	return tao / lambda;
}

int main(){
	double data[3] = {3, 2, 9};
	double* ptr = data;
	cout << Hope(ptr[0]) << endl;
	cout << Hope(ptr[1]) << endl;
	cout << Hope(ptr[2]) << endl;
	return 0;
}


