#include "SpecialCounter.h"



SpecialCounter::SpecialCounter()
{
#include "SpecialCounter.h"
#include <iostream>
	using namespace std;


	SpecialCounter::SpecialCounter()  //destructor
	{
	}


	int SpecialCounter::start() {    //method of start

		int count = 20;

	}


	int SpecialCounter::stop() {      //method of stop
		int stop = 210;
	}


	int SpecialCounter::stepdec(int stepsize) {     //method of decreamenting
		int dec = stepsize;
		int counter, value;
		for (counter = stop(); counter <= start(); counter - stepsize) {
			value = counter;
		}
	}

	int SpecialCounter::stepinc(int stepsize) {       //method of increasing
		int inc = stepsize;
		int counter, value;
		for (counter = stop(); counter <= start(); counter + stepsize) {
		}
		value = counter;
	}


	SpecialCounter::~SpecialCounter() //destructor
	{
	}
