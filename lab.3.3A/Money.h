#include <iostream>
#pragma once
using namespace std;
class Money
{
public:
	long uah;
	unsigned int coin;
public:
	long GetUah() const { return uah; }
	unsigned int GetCoin() const { return coin; }
	void SetUah(long uah) { this->uah = uah; }
	void SetCoin(unsigned int coin) { this->coin = coin; }

	Money();
	Money(long u, unsigned int c);
	Money(const Money&);
	~Money();

	friend ostream& operator <<(ostream&, const Money&);
	friend istream& operator >>(istream&, Money&);

	string toString() const;
};

