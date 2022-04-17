#include <sstream>
#include<iostream>
#include "Money.h"
using namespace std;

Money::Money()
{
	uah = 0;
	coin = 0;
}

Money::Money(long u, unsigned int c)
{
	SetUah(u);
	SetCoin(c);
}

Money::Money(const Money& t)
{
	*this = t;
}

Money::~Money()
{
}

string Money::toString() const
{
	string s;
	stringstream sout;
	if (coin < 10)
		sout << uah << " , 0" << coin << endl;
	else
		sout << uah << " , " << coin << endl;
	return sout.str();

}

ostream& operator<<(ostream& out, const Money& a)
{
	out << a.toString() << endl;
	return out;

}

istream& operator>>(istream& in, Money& a)
{
	cout << "UAH ";
	in >> a.uah;
	cout << "Coin ";
	in >> a.coin;
	return in;


}

