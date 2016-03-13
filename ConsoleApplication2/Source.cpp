#include "SpecialCounter.h"
#include <iostream>
using namespace std;

int main() {
	SpecialCounter accesor;
	int defaultcounter;
	for (defaultcounter = 0; defaultcounter <= 255; defaultcounter++) {
		cout << defaultcounter << endl;
	}
	for (defaultcounter = accesor.start(); defaultcounter <= accesor.stop(); defaultcounter++) {
		cout << defaultcounter << endl;
	}
	cout << accesor.stepdec << endl;
	cout << accesor.stepinc << endl;
}