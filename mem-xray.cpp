#include <iostream>
using std::cout;
using std::endl;

#define ADDRESSES

unsigned long long alpha = 0xFFFF;

double Ultra(double tao){
	static int omega = 0;
#ifdef ADDRESSES
	cout << "Address of omega = " << &omega << endl;
	cout << "Address of tao   = " << &tao << endl;
#endif
	return tao * ++omega;
}

double Super(double epsilon){
	return Ultra(epsilon);	
}

int main(){
	double beta = 5.0, gamma;
#ifdef ADDRESSES
	cout << "Address of alpha = " << &alpha << endl;
	cout << "Address of beta  = " << &beta << endl;
	cout << "Address of gamma = " << &gamma << endl; 
#endif
	cout << " - - - - - - Initial Value - - - - - " << endl;
	cout << "beta  = " << beta << endl;
	cout << "gamma = " << gamma << endl;

	gamma = Ultra(beta);
	
	cout << " - - - - - - After Ultra 1 - - - - - " << endl;
	cout << "beta  = " << beta << endl;
	cout << "gamma = " << gamma << endl;
	
	gamma = Ultra(beta);
	
	cout << " - - - - - - After Ultra 2 - - - - - " << endl;
	cout << "beta  = " << beta << endl;
	cout << "gamma = " << gamma << endl;

	gamma = Super(beta);
	
	cout << " - - - - - - After Ultra 3 with Super - - - - - " << endl;
	cout << "beta  = " << beta << endl;
	cout << "gamma = " << gamma << endl;
	return 0;
}


