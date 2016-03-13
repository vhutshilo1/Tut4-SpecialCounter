#ifndef Specialcounter_H
#define Specialcountr_H

class SpecialCounter
{
public:
	SpecialCounter();
	int start(void);
	int stop(void);
	int stepinc(int stepsize);
	int stepdec(int stepsize);
	SpecialCounter operator-- (int);    //postfix
	SpecialCounter operator-- ();      //prefix
	SpecialCounter operator ++ (int);   //postfix
	SpecialCounter operator ++ (); //prefix
	~SpecialCounter();
};
#endif