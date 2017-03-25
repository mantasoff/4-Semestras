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
#include "orders.h"
using namespace std;



	void Orders::Ivedimas(int a, string b, string c, string d, int e, double f, int g[], string h[], double i[], double j[], double m[], int vn)
	{
		no = a;
		name = b;
		LocationCode = c;
		date = d;
		lineskiekis = e;
		galutineKaina = f;
		vendorno = vn;
		for (int l = 0; l < e; l++)
		{
			LineNo[l] = g[l];
			ItemName[l] = h[l];
			quantity[l] = i[l];
			UnitCost[l] = j[l];
			UnitPrice[l] = m[l];
		}
	}

	void Orders::Isvedimas(int &a, string &b, string &c, string &d, int &e, double &f, int g[], string h[], double i[], double j[], double m[], bool bo, int &vn)
	{
		if (bo == false)
		{
			cout << endl;
			cout << "===========================================================================" << endl;
			cout << "No.             " << no << endl << endl;
			cout << "Vardas          " << name << endl;
			cout << "Vieta           " << LocationCode << endl;
			cout << "Vykdymo data    " << date << endl;
			cout << "Galutine K.     " << galutineKaina << endl;
			cout << endl;
			cout << "Linijos: " << endl;
			cout << "         Nr.       Quantity      I.Name         U. Cost          U. Price" << endl;
			cout << "---------------------------------------------------------------------------" << endl;
			for (int i = 0; i < lineskiekis; i++)
			{
				cout << setw(10) << LineNo[i] << " ";
				cout << setw(10) << quantity[i] << " ";
				cout << setw(20) << ItemName[i] << " ";
				cout << setw(10) << UnitCost[i] << " ";
				cout << setw(10) << UnitPrice[i] << " ";
				cout << endl;
			}
			cout << "===========================================================================" << endl;
		}
		a = no;
		b = name;
		c = LocationCode;
		d = date;
		e = lineskiekis;
		f = galutineKaina;
		vn = vendorno;
		for (int l = 0; l < e; l++)
		{
			g[l] = LineNo[l];
			h[l] = ItemName[l];
			i[l] = quantity[l];
			j[l] = UnitCost[l];
			m[l] = UnitPrice[l];
		}
	}

	void Orders::Nunulinimas()
	{
		no = -1000;
		for (int i = 0; i < lineskiekis; i++)
		{
			LineNo[i] = -1000;


		}
	}
	void Orders::copy(int *a, int *b, int b_size)
	{
		if (b_size == 0) return;
		*a = *b;
		copy(++a, ++b, b_size - 1);
	}
