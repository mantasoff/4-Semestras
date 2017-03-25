#pragma once
#ifndef _VENDOR_H
#define _VENDOR_H

#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"
#include "author.h"
class Vendor : public Author
{
public:
	void Ivedimas(int a, string b, string c, string d);
	void Isvedimas(int &a, string &b, string &c, string &d, bool bo);
	void Nunulinimas();

protected:
	string LocationCode;
};
#endif
