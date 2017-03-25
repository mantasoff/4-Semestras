#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
#include "vendor.h"
using namespace std;



	void Vendor::Ivedimas(int a, string b, string c, string d)
	{
		no = a;
		name = b;
		surname = c;
		LocationCode = d;
	}
	void Vendor::Isvedimas(int &a, string &b, string &c, string &d, bool bo)
	{
		if (bo == false)
		{
			cout << endl << "===========================================================================" << endl;
			cout << "No.             " << no << endl << endl;
			cout << "Varda           " << name << endl;
			cout << "Surname         " << surname << endl;
			cout << "Location Code:  " << LocationCode << endl;
			cout << "===========================================================================" << endl;
			cout << endl;
		}
		a = no;
		b = name;
		c = surname;
		d = LocationCode;
	}
	void Vendor::Nunulinimas()
	{
		no = -1000;
		name = " ";
		surname = " ";
		LocationCode = " ";
	}



