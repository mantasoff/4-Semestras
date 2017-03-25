#pragma once
#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
#include "vendor.h"

class Customer : public Vendor
{
public:
	void Ivedimas(int a, string b, string c, string d, int e);
	void Isvedimas(int &a, string &b, string &c, string &d, int &e, bool bo);
	void Nunulinimas();
public:
	int VAT;
};

#endif
