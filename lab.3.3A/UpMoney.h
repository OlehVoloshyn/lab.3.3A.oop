#pragma once
#include "Money.h"
class UpMoney :
    public Money
{
public:
	UpMoney(const long uah = 0, const unsigned int coin = 0 );
	UpMoney(const UpMoney&);
	~UpMoney() {};
	Money& operator ++();
	Money& operator --();
	Money operator ++(int);
	Money operator --(int);
	Money& operator = (const Money&);

	friend Money Add(Money l, Money r);
	friend Money Div(Money l, Money r);
	friend Money DivD(Money l, double dr);
};

