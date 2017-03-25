#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
#include "vendor.h"
#include "customer.h"
#include "items.h"
using namespace std;



	void Items::Ivedimas(int a, string b, int c, double d, double e)
	{
		no = a;
		name = b;
		AuthorCode = c;
		UnitPrice = d;
		UnitCost = e;
	}
	void Items::Isvedimas(int &a, string &b, int &c, double &d, double &e, bool bo)
	{
		if (bo == false)
		{
			cout << endl;
			cout << "===========================================================================" << endl;
			cout << "No.             " << no << endl << endl;
			cout << "Vardas          " << name << endl;
			cout << "Autoriaus V.    " << AuthorCode << endl;
			cout << "Pardavimo k.    " << UnitPrice << endl;
			cout << "Pirkimo   k.    " << UnitCost << endl;
			cout << "===========================================================================" << endl;
			cout << endl;
		}
		a = no;
		b = name;
		c = AuthorCode;
		d = UnitPrice;
		e = UnitCost;
	}
	void Items::Nunulinimas()
	{
		no = -1000;
		name = " ";
		AuthorCode = 0;
		UnitPrice = 0;
		UnitCost = 0;
	}




