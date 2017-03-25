#pragma once
#ifndef _STATISTIKA_H
#define _STATISTIKA_H

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

class Statistika
{
public:

	void Skaitymas();
	void Rasymas();
	void operator++();
	void operator--();
	void PiniguTvarkymas(double *pro, double *min);
	Statistika();
	void Show();
private:
	double profit;
	double minus;
	double allincome;
	int objectscreated;
	int objectsdeleted;
};
#endif