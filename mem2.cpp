#include <iostream>
using namespace std;

unsigned long long int chi = 0x1FF;

double* Faith(int gamma){
	double* data = new double[2 * gamma];
	return data;
}
void Love(double& value){
	static int p = 0;
	value += p;
	p += 2;
}

int main(){
	double* numbers = nullptr;
	numbers = Faith(4);
	for (int i=0; i < 8; i++)
		Love(numbers[i]);
	for (int i=0; i<8; i++)
		cout << numbers[i] << endl;

	delete[] numbers;
	return 0;
}


