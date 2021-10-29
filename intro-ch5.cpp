#include "intro-ch5-e.h"
#include <iostream>
using std::cout;
using std::endl;

unsigned long int hades;
extern short int zeus;

void Pulsar(int);
void Quasar(double&);

int main(int argc, char* argv[]){
	cout << "Zeus = " << zeus << endl;
	PrintNumbers();
	PrintNumbers();
	int olympus = 0;
	cout << "Olympus and Hades at the beginning" << endl;
	cout << olympus << endl;
	cout << hades << endl;
	cout << "--------------------------------------------" << endl;
	int toPulsar = 10;
	double toQuasar = 20;
	cout << "Calling Pulsar and Quasar for the first time" << endl;
	cout << "	Pulsar" << endl;
	Pulsar(toPulsar);
	cout << toPulsar << endl;
	cout << "	Quasar" << endl;
	Quasar(toQuasar);
	cout << toQuasar << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Calling Pulsar and Quasar second time" << endl;
	cout << "	Pulsar" << endl;
	Pulsar(toPulsar);
	cout << toPulsar << endl;
	cout << "	Quasar" << endl;
	Quasar(toQuasar);
	cout << toQuasar << endl;
	cout << "--------------------------------------------" << endl;
	return 0;
}

void Pulsar(int pulsar){
	int littlePulsar = 0;
	cout << "\t" << pulsar++ << endl;
	cout << "\t" << littlePulsar++ << endl;
}
void Quasar(double& quasar){
	static double littleQuasar = 0;
	cout << "\t" << quasar++ << endl;
	cout << "\t" << littleQuasar++ << endl;
}

