#pragma once
#ifndef _AUTHOR_H
#define _AUTHOR_H

#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "pradine.h"

class Author : public pradine
{
public:
	void Ivedimas(int a, string b, string c);


	void Isvedimas(int &a, string &b, string &c, bool bo);
	void Nunulinimas();

protected:
	string surname;
};
#endif

