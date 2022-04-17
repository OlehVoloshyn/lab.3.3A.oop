#include "UpMoney.h"
#include <iostream>
using namespace std;

UpMoney::UpMoney(const long uah, const unsigned int coin)

{
	SetUah(uah);
	SetCoin(coin);
}

UpMoney::UpMoney(const UpMoney& t)
{
	*this = t;
}

Money& UpMoney::operator++()
{
	++uah;
	return *this;
}

Money& UpMoney::operator--()
{
	 --uah;
	return *this;
}

Money UpMoney::operator++(int)
{
	Money t(*this);
	coin++;
	return t;
}

Money UpMoney::operator--(int)
{
	Money t(*this);
	coin--;
	return t;
}

Money& UpMoney::operator=(const Money& r)
{
	uah = r.uah;
	coin = r.coin;
	return *this;
}

Money Add(Money l, Money r)
{
	Money t;

	t.uah = l.uah + r.uah + floor((l.coin + r.coin) / 100);

	t.coin = (l.coin + r.coin) % 100;

	return t;
}

Money Div(Money l, Money r)
{
	Money t;
	if (r.uah != 0 && r.coin != 0)
	{
		t.uah = l.uah / r.uah;

		t.coin = l.coin / r.coin;
	}
	return t;
}

Money DivD(Money l, double dr)
{
	Money t;
	if (dr != 0)
	{
		t.uah = l.uah / dr;

		t.coin = l.coin / dr;
	}
	return t;
}
