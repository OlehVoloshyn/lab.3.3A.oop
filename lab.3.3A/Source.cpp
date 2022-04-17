#include"Money.h"
#include"UpMoney.h"
#include<iostream>
using namespace std;
int main()
{
	

		UpMoney a(1,2), b, c, d, f;
		double dr;

		cout << a++ << endl;
		cout << a-- << endl;
		cout << ++a << endl;
		cout << --a << endl;

		UpMoney q(a);
		cout << "Input suma :" << endl;
		cin >> a;
		cout << endl;
		cin >> b;
		cout << "suma = " << Add(a, b) << endl;
		cout << endl;


		cout << "Div :" << endl;
		cout << "Div = " << Div(a, b) << endl;

		cout << "drib ="; cin >> dr;
		cout << "DivD :" << endl;
		cout << "DivD = " << DivD(a, dr) << endl;


		return 0;
	
}