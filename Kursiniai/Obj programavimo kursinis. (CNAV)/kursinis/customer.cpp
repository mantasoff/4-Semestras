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
using namespace std;



	void Customer::Ivedimas(int a, string b, string c, string d, int e)
	{
		no = a;
		name = b;
		surname = c;
		LocationCode = d;
		VAT = e;
	}
	void Customer::Isvedimas(int &a, string &b, string &c, string &d, int &e, bool bo)
	{
		if (bo == false)
		{
			cout << endl << "===========================================================================" << endl;
			cout << "No.             " << no << endl << endl;
			cout << "Varda           " << name << endl;
			cout << "Surname         " << surname << endl;
			cout << "Location Code:  " << LocationCode << endl;
			cout << "VAT:            " << VAT << "%" << endl;
			cout << "===========================================================================" << endl;
			cout << endl;
		}
		a = no;
		b = name;
		c = surname;
		d = LocationCode;
		e = VAT;
	}
	void Customer::Nunulinimas()
	{
		no = -1000;
		name = " ";
		surname = " ";
		LocationCode = " ";
		VAT = 0;
	}




