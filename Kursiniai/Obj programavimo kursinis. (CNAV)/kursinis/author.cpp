#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
using namespace std;


	void Author::Ivedimas(int a, string b, string c)
	{
		no = a;
		name = b;
		surname = c;
	}

	void Author::Isvedimas(int &a, string &b, string &c, bool bo)
	{
		if (bo == false)
		{
			cout << endl << "===========================================================================" << endl;
			cout << "No.           " << no << endl << endl;
			cout << "Varda         " << name << endl;
			cout << "Surname       " << surname << endl;
			cout << "===========================================================================" << endl;
			cout << endl;
		}
		a = no;
		b = name;
		c = surname;
	}
	
	void Author::Nunulinimas()
	{
		no = -1000;
		name = " ";
		surname = " ";
	}


