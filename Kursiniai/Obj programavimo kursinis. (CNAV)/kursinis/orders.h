#pragma once
#ifndef _ORDERS_H
#define _ORDERS_H

#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
#include "vendor.h"

class Orders :public pradine
{
public:
	void Ivedimas(int a, string b, string c, string d, int e, double f, int g[], string h[], double i[], double j[], double m[], int vn);
	void Isvedimas(int &a, string &b, string &c, string &d, int &e, double &f, int g[], string h[], double i[], double j[], double m[], bool bo, int &vn);
	void copy(int *a, int *b, int b_size);
	void Nunulinimas();
private:
	string LocationCode;
	string date;
	int lineskiekis;
	double galutineKaina;
	int LineNo[30];
	string ItemName[30];
	double quantity[30];
	double UnitCost[30];
	double UnitPrice[30];
	int vendorno;
};
#endif
