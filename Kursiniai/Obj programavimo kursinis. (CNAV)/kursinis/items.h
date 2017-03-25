#pragma once
#ifndef _ITEMS_H
#define _ITEMS_H

#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
#include "vendor.h"

class Items : public pradine
{
public:
	void Ivedimas(int a, string b, int c, double d, double e);
	void Isvedimas(int &a, string &b, int &c, double &d, double &e, bool bo);
	void Nunulinimas();
private:
	int AuthorCode;
	double UnitPrice;
	double UnitCost;
};
#endif
