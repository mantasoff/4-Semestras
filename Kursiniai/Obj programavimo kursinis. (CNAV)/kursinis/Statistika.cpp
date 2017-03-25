#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
#include "vendor.h"
#include "Statistika.h"
using namespace std;

	void Statistika::Skaitymas()
	{
		ifstream fd("statistika.txt");
		fd >> allincome >> profit >> minus >> objectscreated >> objectsdeleted;
		fd.close();
	}
	void Statistika::Rasymas()
	{
		ofstream fr("statistika.txt");
		fr << allincome << ' ' << profit << ' ' << minus << ' ' << objectscreated << ' ' << objectsdeleted;
		fr.close();
	}
	void Statistika::operator++()
	{
		objectscreated += 1;
	}
	void Statistika::operator--()
	{
		objectsdeleted += 1;
	}

	void Statistika::PiniguTvarkymas(double *pro, double *min)
	{
		profit += *pro;
		minus += *min;
		allincome += (profit + minus);
	}

	Statistika::Statistika()
	{
		profit = 0;
		minus = 0;
		allincome = 0;
		objectscreated = 0;
		objectsdeleted = 0;
	}
	void Statistika::Show()
	{
		system("CLS");
		cout << "=Rodoma statistika su taipogi labai reikaling informacija=" << endl;
		cout << "==========================================================" << endl;
		cout << "==========================================================" << endl << endl;
		cout << "= Kiek pinigu yra gauta is pardavimu:    " << profit << endl;
		cout << "===============================================" << endl;
		cout << "= Kiek pinigu isnaudota pirkimam:        " << minus << endl;
		cout << "===============================================" << endl;
		cout << "= Kiek pinigu turime dabar:              " << allincome << endl;
		cout << "===============================================" << endl;
		cout << "= Kiek objektu buvo sukurta:             " << objectscreated << endl;
		cout << "===============================================" << endl;
		cout << "= Kiek objektu buvo istrinta             " << objectsdeleted << endl;
		cout << "===============================================" << endl;

		cout << "Spauskite bet koki mygtuka noredami testi" << endl;
		char praejimas;
		praejimas = _getch();

	}
