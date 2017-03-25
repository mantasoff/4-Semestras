// ConsoleApplication1.cpp : Defines the entry point for the console application.
#include <iomanip>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "windows.h"
#include "pradine.h"
#include "author.h"
#include "vendor.h"
#include "customer.h"
#include "items.h"
#include "orders.h"
#include "Statistika.h"


using namespace std;


//======================================================Interface funckija
int Interface()
{
	cout << "Sveiki atvyke i mini ERP pavadinimu CNAV. Pasirinkite ka norite matyti dabar savo ekrane, naudodami kompiuterio rodiklytes : ";
	int vieta = 0;
	int vieta2;
	bool ex = false;
	char rod;
	while (!ex)						//Nesibaigiantis ciklas
	{
		system("CLS");
		cout << "Sveiki atvyke i mini ERP pavadinimu CNAV. Pasirinkite ka norite matyti dabar savo ekrane: ";
		cout << endl << endl << endl;

		cout << "===============" << endl;
		cout << "=  Pirkejai   =";
		if (vieta == 0) cout << " <<<--";
		cout << endl;
		cout << "===============" << endl;

		cout << "=  Pardavejai =";
		if (vieta == 1) cout << " <<<--";
		cout << endl;
		cout << "===============" << endl;
		cout << "=  Autoriai   =";
		if (vieta == 2) cout << " <<<--";
		cout << endl;
		cout << "===============" << endl;
		cout << "=   Prekes    =";
		if (vieta == 3) cout << " <<<--";
		cout << endl;
		cout << "===============" << endl;
		cout << "=  Uzsakymai  =";
		if (vieta == 4) cout << " <<<--";
		cout << endl;
		cout << "===============" << endl;
		cout << "=  Statistika =";
		if (vieta == 5) cout << " <<<--";
		cout << endl;
		cout << "===============" << endl;
		cout << endl << endl << "ESC mygtukas leidzia grizti atgal ";
		cout << endl << endl << "Mantas Paskevicius Production© " << endl << "PRif-15/2" << endl;

		vieta2 = 0;
		rod = _getch();
		if (rod<0) rod = _getch();					//Pradzioje grazina (int)char reiksme 32 
		if (int(rod) == 72 && vieta != 0) vieta--;	//Jeigu paspaudziama rodyklyte zemyn, <vieta> padideja, jei atvirksciai, sumazeja.
		if (int(rod) == 80 && vieta != 5) vieta++;
		if (int(rod) == 13)							//Jeigu paspaudziamas <ENTER>
		{
			while (!ex)
			{
				if (vieta == 5)
				{
					Statistika* Stats = new Statistika;
					Stats->Skaitymas();
					Stats->Show();
					return -100;
				}
				system("CLS");
				cout << "Sveiki atvyke i mini ERP pavadinimu CNAV. Pasirinkite ka norite matyti dabar savo ekrane: ";
				cout << endl << endl << endl;

				cout << "===============             ============================" << endl;
				cout << "=  Pirkejai   =";
				if (vieta != 0) cout << "             =       Kurti nauja        =";
				else         cout << " <<<--       =       Kurti nauja        =";

				if (vieta2 == 0) cout << "<<<--";
				cout << endl;
				cout << "===============             ============================" << endl;

				cout << "=  Pardavejai =";
				if (vieta != 1) cout << "             =      Matyti sarasa       =";
				else            cout << " <<<--       =      Matyti sarasa       =";
				if (vieta2 == 1) cout << "<<<--";
				cout << endl;
				cout << "===============             ============================" << endl;
				cout << "=  Autoriai   =";
				if (vieta != 2) cout << "             = Matyti tam tikra objekta =";
				else            cout << " <<<--       = Matyti tam tikra objekta =";
				if (vieta2 == 2) cout << "<<<--";
				cout << endl;
				cout << "===============             ============================" << endl;

				cout << "=   Prekes    =";
				if (vieta != 3) cout << "             =      Trinti objekta      =";
				else            cout << " <<<--       =      Trinti objekta      =";
				if (vieta2 == 3) cout << "<<<--";
				cout << endl;
				cout << "===============             ============================" << endl;
				if (vieta != 4)cout << "=  Uzsakymai  =";
				else cout << "=  Uzsakymai  = <<<--";
				cout << endl;
				cout << "===============" << endl;

				if (vieta != 5)cout << "=  Statistika =";
				else cout << "=  Statistika = <<<--";
				cout << endl;
				cout << "===============" << endl;
				cout << endl << endl << "ESC mygtukas leidzia grizti atgal ";
				cout << endl << endl << "Mantas Paskevicius Production© " << endl << "PRif-15/2";
				rod = _getch();
				if (rod < 0) rod = _getch();								//Pradzioje grazina (int)char reiksme 32 
				if (int(rod) == 72 && vieta2 != 0) vieta2--;				//Jeigu paspaudziama rodyklyte zemyn, <vieta> padideja, jei atvirksciai, sumazeja.
				if (int(rod) == 80 && vieta2 != 3) vieta2++;
				if (int(rod) == 27) break;									//Jeigu paspaudþiamas <escape>, gráþtama á praeità sekcijà
				if (int(rod) == 13) return vieta * 10 + vieta2;				//Pereinama á kità funckijà
			}
		}
		else
		{
			
		}
	}
	return vieta;
}


//===============================================================Skaitymo ir rasymo i faila funkcijos				
void AuthorSkaitymas(Author Autoriai[], int &n);
void AuthorIvedimas(Author Autoriai[], int n);
void VendorSkaitymas(Vendor Vendoriai[], int &n);
void VendorIvedimas(Vendor Vendoriai[], int n);
void CustomerSkaitymas(Customer Customeriai[], int &n);
void CustomerIvedimas(Customer Customeriai[], int n);
void ItemSkaitymas(Items Itemai[], int &n);
void ItemIvedimas(Items Itemai[], int n);
void OrderSkaitymas(Orders Orderiai[], int &n);
void OrderIvedimas(Orders Orderiai[], int n);




//=========================================================Funkcija, kuri pradeda dirbti su klasem 
void Veikimas(int vieta)
{
	if (vieta / 10 == 0)
	{
		if (vieta % 10 == 0)
		{			
			system("CLS");									
			Customer Customeriai[30];					//Sukuriama 30 objektu 
			int n = 0;
			CustomerSkaitymas(Customeriai, n);			//Nuskaitomi ir isvedami is failo
			int a, e;
			string b, c, d;
			cout << "Iveskite numeri:  ";				//Ivedama informacija
			cin >> a;
			cout << endl;

			cout << "Iveskite varda:   ";				
			cin >> b;
			cout << endl;

			cout << "Iveskite pavarde: ";
			cin >> c;
			cout << endl;

			cout << "Iveskite vieta:   ";
			cin >> d;
			cout << endl;

			cout << "Iveskite VAT:     ";
			cin >> e;
			cout << endl;

			Customeriai[n].Ivedimas(a, b, c, d, e);		//Informacija ivedama i nauja objekta
			n++;
			CustomerIvedimas(Customeriai, n);			//Isvedama i nauja faila
			
			Statistika* Stats = new Statistika;			//Sukuriama poiterine klase
			Stats->Skaitymas();							//Nuskaitoma
			Stats->operator++();						//Perkraunama
			Stats->Rasymas();

		}
		if (vieta % 10 == 1)
		{
			system("CLS");			
			int a, e;
			string b, c, d;								//Nuskaitoma
			Customer Customeriai[30];					//Objektai sukuriami
			int n = 0;
			CustomerSkaitymas(Customeriai, n);			//Skaitoma
			for (int i = 0; i < n; i++)
			{
				Customeriai[i].Isvedimas(a, b, c, d, e, false);			//Isvedama i ekrana
			}
			system("PAUSE");
		}
		if (vieta % 10 == 2)
		{
			system("CLS");
			int a, e;
			string b, c, d;
			Customer Customeriai[30];
			int n = 0;
			CustomerSkaitymas(Customeriai, n);
			int ieskomas = 0;
			cout << "Iveskite ieskomo objekto numeri: ";
			cin >> ieskomas;
			for (int i = 0; i < n; i++)
			{
				if (Customeriai[i].GetNo() == ieskomas)
				{
					Customeriai[i].Isvedimas(a, b, c, d, e, false);

				}
			}
			cout << endl << "Paspauskite bet kuri klavisa kai noresite baigti " << endl;
			ieskomas = _getch();
		}
		if (vieta % 10 == 3)
		{
			system("CLS");
			int trinamas;
			cout << "Objekta noretumete istrinti? Irasykite jo nr ";
			cin >> trinamas;
			Customer Customeriai[30];
			int n = 0;
			CustomerSkaitymas(Customeriai, n);

			for (int i = 0; i < n; i++)
			{
				if (trinamas == Customeriai[i].GetNo())
				{
					Customeriai[i].Nunulinimas();
				}
			}
			CustomerIvedimas(Customeriai, n);
		}
	}
	if (vieta / 10 == 1)
	{
		if (vieta % 10 == 0)
		{
			system("CLS");
			Vendor Vendoriai[30];
			int n = 0;
			VendorSkaitymas(Vendoriai, n);
			int a;
			string b, c, d;
			cout << "Iveskite numeri ";
			cin >> a;
			cout << endl;

			cout << "Iveskite varda ";
			cin >> b;
			cout << endl;

			cout << "Iveskite pavarde ";
			cin >> c;
			cout << endl;

			cout << "Iveskite vieta ";
			cin >> d;
			cout << endl;
			Vendoriai[n].Ivedimas(a, b, c, d);
			n++;
			VendorIvedimas(Vendoriai, n);

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator++();
			Stats->Rasymas();
		}
		if (vieta % 10 == 1)
		{
			system("CLS");
			int a;
			string b, c, d;
			Vendor Vendoriai[30];
			int n = 0;
			VendorSkaitymas(Vendoriai, n);
			for (int i = 0; i < n; i++)
			{
				Vendoriai[i].Isvedimas(a, b, c, d, false);
			}
			system("PAUSE");
		}
		if (vieta % 10 == 2)
		{
			system("CLS");
			int a;
			string b, c, d;
			Vendor Vendoriai[30];
			int n = 0;
			VendorSkaitymas(Vendoriai, n);
			int ieskomas = 0;
			cout << "Iveskite ieskomo objekto numeri: ";
			cin >> ieskomas;
			for (int i = 0; i < n; i++)
			{
				if (Vendoriai[i].GetNo() == ieskomas)
				{
					Vendoriai[i].Isvedimas(a, b, c, d, false);

				}
			}
			cout << endl << "Paspauskite bet kuri klavisa kai noresite baigti " << endl;
			ieskomas = _getch();
		}
		if (vieta % 10 == 3)
		{
			system("CLS");
			int trinamas;
			cout << "Objekta noretumete istrinti? Irasykite jo nr ";
			cin >> trinamas;
			Vendor Vendoriai[30];
			int n = 0;
			VendorSkaitymas(Vendoriai, n);

			for (int i = 0; i < n; i++)
			{
				if (trinamas == Vendoriai[i].GetNo())
				{
					Vendoriai[i].Nunulinimas();
				}
			}
			VendorIvedimas(Vendoriai, n);

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator--();
			Stats->Rasymas();
		}
	}
	if (vieta / 10 == 2)
	{
		if (vieta % 10 == 0)
		{
			system("CLS");
			Author Autoriai[30];
			int n = 0;
			AuthorSkaitymas(Autoriai, n);

			int a;
			string b, c;
			cout << "Iveskite numeri ";
			cin >> a;
			cout << endl;

			cout << "Iveskite varda ";
			cin >> b;
			cout << endl;

			cout << "Iveskite pavarde ";
			cin >> c;
			cout << endl;

			Autoriai[n].Ivedimas(a, b, c);
			n++;
			AuthorIvedimas(Autoriai, n);

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator++();
			Stats->Rasymas();
		}
		if (vieta % 10 == 1)
		{
			system("CLS");
			int a;
			string b, c;
			Author Autoriai[30];
			int n = 0;
			AuthorSkaitymas(Autoriai, n);
			for (int i = 0; i < n; i++)
			{
				Autoriai[i].Isvedimas(a, b, c, false);
			}
			system("PAUSE");
		}
		if (vieta % 10 == 2)
		{
			system("CLS");
			int a;
			string b, c;
			Author Autoriai[30];
			int n = 0;
			AuthorSkaitymas(Autoriai, n);
			int ieskomas = 0;
			cout << "Iveskite ieskomo objekto numeri: ";
			cin >> ieskomas;
			for (int i = 0; i < n; i++)
			{
				if (Autoriai[i].GetNo() == ieskomas)
				{
					Autoriai[i].Isvedimas(a, b, c, false);

				}
			}
			cout << endl << "Paspauskite bet kuri klavisa kai noresite baigti " << endl;
			ieskomas = _getch();
		}
		if (vieta % 10 == 3)
		{
			system("CLS");
			int trinamas;
			cout << "Objekta noretumete istrinti? Irasykite jo nr ";
			cin >> trinamas;
			Author Autoriai[30];
			int n = 0;
			AuthorSkaitymas(Autoriai, n);

			for (int i = 0; i < n; i++)
			{
				if (trinamas == Autoriai[i].GetNo())
				{
					Autoriai[i].Nunulinimas();
				}
			}
			AuthorIvedimas(Autoriai, n);

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator--();
			Stats->Rasymas();
		}
	}
	if (vieta / 10 == 3)
	{
		if (vieta % 10 == 0)
		{
			system("CLS");
			Items Itemai[30];



			int n = 0;
			ItemSkaitymas(Itemai, n);

			int a, c;
			string b;
			double d, e;

			cout << "Iveskite numeri ";
			cin >> a;
			cout << endl;

			cout << "Iveskite varda ";
			cin >> b;
			cout << endl;
			


			Author Autoriai[30];
			int n1 = 0;
			int a1;
			string b1, c1;
			AuthorSkaitymas(Autoriai, n1);
			for (int i = 0; i < n1; i++)
			{
				Autoriai[i].Isvedimas(a1, b1, c1, false);
			}
			bool tikr = false;
			int tikr3;
			while (tikr == false)
			{
				cout << "Iveskite autoriaus numeri: " << endl;
				cin >> c;
				for (int i = 0; i < n1; i++)
				{

					if (Autoriai[i].GetNo() == c)  tikr = true;
				}
				if (tikr == false) cout << "Tokio autoriaus nera " << endl;
			}
			cout << "Iveskite pardavimo kaina " << endl;
			cin >> d;
			cout << endl;

			cout << "Iveskite pirkimo kaina " << endl;
			cin >> e;
			cout << endl;
			Itemai[n].Ivedimas(a, b, c, d, e);
			n++;
			ItemIvedimas(Itemai, n);

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator++();
			Stats->Rasymas();

		}
		if (vieta % 10 == 1)
		{
			system("CLS");
			int a, c;
			string b;
			double d, e;
			Items Itemai[30];
			int n = 0;
			ItemSkaitymas(Itemai, n);

			ItemSkaitymas(Itemai, n);
			for (int i = 0; i < n; i++)
			{
				Itemai[i].Isvedimas(a, b, c, d, e, false);
			}
			system("PAUSE");
		}
		if (vieta % 10 == 2)
		{
			system("CLS");
			int a, c;
			string b;
			double d, e;
			Items Itemai[30];
			int n = 0;
			ItemSkaitymas(Itemai, n);
			int ieskomas = 0;
			cout << "Iveskite ieskomo objekto numeri: ";
			cin >> ieskomas;
			for (int i = 0; i < n; i++)
			{
				if (Itemai[i].GetNo() == ieskomas)
				{
					Itemai[i].Isvedimas(a, b, c, d, e, false);

				}
			}
			cout << endl << "Paspauskite bet kuri klavisa kai noresite baigti " << endl;
			ieskomas = _getch();
		}
		if (vieta % 10 == 3)
		{
			system("CLS");
			int trinamas;
			cout << "Objekta noretumete istrinti? Irasykite jo nr ";
			cin >> trinamas;
			Items Itemai[30];
			int n = 0;
			ItemSkaitymas(Itemai, n);

			for (int i = 0; i < n; i++)
			{
				if (trinamas == Itemai[i].GetNo())
				{
					Itemai[i].Nunulinimas();
				}
			}
			ItemIvedimas(Itemai, n);

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator--();
			Stats->Rasymas();
		}
	}
	if (vieta / 10 == 4)
	{
		if (vieta % 10 == 0)
		{
			system("CLS");
			Orders Orderiai[30];
			int n = 0;
			OrderSkaitymas(Orderiai, n);

			int a, e, g[30], vn;
			double f, i[30], j[30], m[30];
			string b, c, d, h[30];

			cout << "Iveskite numeri ";
			cin >> a;
			cout << endl;

			cout << "Iveskite varda ";
			cin >> b;
			cout << endl;
			system("CLS");


			Customer Customeriai[30];
			int a2, e2;
			string b2, c2, d2;
			int n2;
			CustomerSkaitymas(Customeriai, n2);
			int cnr;
			for (int i = 0; i < n2; i++)
			{
				Customeriai[i].Isvedimas(a2, b2, c2, d2, e2, false);
			}
			double VAT;
			VAT = e2;
			bool tikr = false;
			int tikr3;
			while (tikr == false)
			{
				cout << "Iveskite pirkejo nr numeri: " << endl;
				cin >> vn;
				for (int j = 0; j < n2; j++)
				{
					if (Customeriai[j].GetNo() == vn)
					{
						tikr = true;
						cnr = j;
					}
				}
				if (tikr == false) cout << "Tokio pirkejo  nera " << endl;
			}
			Customeriai[cnr].Isvedimas(a2, b2, c2, d2, e2, false);
			c = d2;

			cout << "Iveskite data (2016/09/17) pavidalu" << endl;
			cin >> d;
			cout << endl;

			cout << "Iveskite liniju kieki " << endl;
			cin >> e;
			cout << endl;
			g[0] = 0;
			int k = 1;
			int in;
			bool ex = false;
			f = 0;
			Items Itemai[30];
			int n1;
			ItemSkaitymas(Itemai, n1);
			int itemno;
			int a1, c1;
			string b1;
			double d1, e1;

			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			double* stattvark = new double;
			*stattvark = 0;
			double* nulis = new double;
			*nulis = 0;
			for (int l = 0; l < e; l++)
			{

				g[l] = l;

				ex = false;
				while (ex == false)
				{
					for (int y = 0; y < n1; y++)
					{
						Itemai[y].Isvedimas(a1, b1, c1, d1, e1, false);
					}
					cout << "Irasykite daikto numeri: ";
					cin >> in;
					int u;
					for (u = 0; u < n1; u++)
					{
						if (in == Itemai[u].GetNo())
						{
							ex = true;
							itemno = u;
						}
					}
					Itemai[u].Isvedimas(a1, b1, c1, d1, e1, true);

					h[l] = b1;
					cout << "Iveskite daikto kieki: ";
					cin >> i[l];
					j[l] = d1;
					m[l] = e1;
					if (i[l] > 0)
					{
						f += i[l] * m[l]*((VAT / 100) + 1);
						*stattvark = i[l] * m[l] *((VAT/100)+1);
						Stats->PiniguTvarkymas(stattvark, nulis);
					}
					else
					{
						f -= i[l] * j[l] * ((VAT / 100) + 1);
						*stattvark = i[l] * j[l] * ((VAT / 100) + 1);
						Stats->PiniguTvarkymas(nulis, stattvark);
					}
				}
			}


			Orderiai[n].Ivedimas(a, b, c, d, e, f, g, h, i, j, m, vn);
			n++;
			OrderIvedimas(Orderiai, n);

			
			Stats->operator++();
			Stats->Rasymas();
		}
		if (vieta % 10 == 1)
		{
			system("CLS");
			int a, e, g[30], vn;
			double f, i[30], j[30], m[30];
			string b, c, d, h[30];
			Orders Orderiai[30];
			int n = 0;
			//OrderSkaitymas(Orderiai, n);

			OrderSkaitymas(Orderiai, n);
			for (int l = 0; l < n; l++)
			{
				Orderiai[l].Isvedimas(a, b, c, d, e, f, g, h, i, j, m, false, vn);
			}
			char ch;
			ch = _getch();
		}
		if (vieta % 10 == 2)
		{
			system("CLS");
			int a, e, g[30], vn;
			double f, i[30], j[30], m[30];
			string b, c, d, h[30];
			Orders Orderiai[30];
			int n = 0;
			OrderSkaitymas(Orderiai, n);
			int ieskomas = 0;
			cout << "Iveskite ieskomo objekto numeri: ";
			cin >> ieskomas;
			for (int l = 0; l < n; l++)
			{
				if (Orderiai[l].GetNo() == ieskomas)
				{
					Orderiai[l].Isvedimas(a, b, c, d, e, f, g, h, i, j, m, false, vn);

				}
			}
			cout << endl << "Paspauskite bet kuri klavisa kai noresite baigti " << endl;
			ieskomas = _getch();
		}
		if (vieta % 10 == 3)
		{
			system("CLS");
			int trinamas;
			cout << "Objekta noretumete istrinti? Irasykite jo nr ";
			cin >> trinamas;
			Orders Orderiai[30];
			int n = 0;
			OrderSkaitymas(Orderiai, n);

			for (int i = 0; i < n; i++)
			{
				if (trinamas == Orderiai[i].GetNo())
				{
					Orderiai[i].Nunulinimas();
				}
			}
			OrderIvedimas(Orderiai, n);
			
			Statistika* Stats = new Statistika;
			Stats->Skaitymas();
			Stats->operator--();
			Stats->Rasymas();
		}
	}
}
//====================================Skaitymas ir rasymas i faila
void AuthorSkaitymas(Author Autoriai[], int &n)
{
	n = 0;
	int a;
	string b, c;
	ifstream fd("authors.txt");
	for (int i = 0; !fd.eof(); i++)
	{
		fd >> a >> b >> c;
		n++;
		Autoriai[i].Ivedimas(a, b, c);
	}
	n--;

	fd.close();
}


void AuthorIvedimas(Author Autoriai[], int n)
{
	int a;
	string b, c;
	//	Autoriai[0].Isvedimas(a, b, c, false);
	ofstream fr("authors.txt");
	for (int i = 0; i<n; i++)
	{
		Autoriai[i].Isvedimas(a, b, c, false);
		//cout << a << ' ' << b << ' ' << c << endl;
		if (Autoriai[i].GetNo() != -1000) fr << a << ' ' << b << ' ' << c << endl;
	}
	fr.close();
}

void VendorSkaitymas(Vendor Vendoriai[], int &n)
{
	n = 0;
	int a;
	string b, c, d;
	ifstream fd("vendors.txt");
	for (int i = 0; !fd.eof(); i++)
	{
		fd >> a >> b >> c >> d;
		n++;
		Vendoriai[i].Ivedimas(a, b, c, d);
		if (Vendoriai[i].GetNo() < 0) Vendoriai[i].Nunulinimas();
	}
	n--;
	fd.close();
}

void VendorIvedimas(Vendor Vendoriai[], int n)
{
	int a;
	string b, c, d;
	ofstream fr("vendors.txt");
	for (int i = 0; i < n; i++)
	{
		Vendoriai[i].Isvedimas(a, b, c, d, false);
		//cout << a << ' ' << b << ' ' << c << endl;
		if (Vendoriai[i].GetNo() != -1000) fr << a << ' ' << b << ' ' << c << ' ' << d << endl;
	}
	fr.close();
}

void CustomerSkaitymas(Customer Customeriai[], int &n)
{
	n = 0;
	int a, e;
	string b, c, d;
	ifstream fd("customers.txt");
	for (int i = 0; !fd.eof(); i++)
	{
		fd >> a >> b >> c >> d >> e;
		n++;
		Customeriai[i].Ivedimas(a, b, c, d, e);
		if (Customeriai[i].GetNo() < 0) Customeriai[i].Nunulinimas();
	}
	n--;
	fd.close();
}

void CustomerIvedimas(Customer Customeriai[], int n)
{
	int a, e;
	string b, c, d;
	ofstream fr("customers.txt");
	for (int i = 0; i < n; i++)
	{
		Customeriai[i].Isvedimas(a, b, c, d, e, false);
		//cout << a << ' ' << b << ' ' << c << endl;
		if (Customeriai[i].GetNo() != -1000) fr << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
	}
	fr.close();
}


void ItemSkaitymas(Items Itemai[], int &n)
{
	n = 0;
	int a, c;
	double e, d;
	string b;
	ifstream fd("items.txt");
	for (int i = 0; !fd.eof(); i++)
	{
		fd >> a >> b >> c >> d >> e;
		n++;
		Itemai[i].Ivedimas(a, b, c, d, e);
		if (Itemai[i].GetNo() < 0) Itemai[i].Nunulinimas();
	}
	n--;
	fd.close();
}

void ItemIvedimas(Items Itemai[], int n)
{
	int a, c;
	double e, d;
	string b;
	ofstream fr("items.txt");
	for (int i = 0; i < n; i++)
	{
		Itemai[i].Isvedimas(a, b, c, d, e, false);
		//cout << a << ' ' << b << ' ' << c << endl;
		if (Itemai[i].GetNo() != -1000) fr << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
	}
	fr.close();
}


void OrderSkaitymas(Orders Orderiai[], int &n)
{
	n = 0;
	int a, e, g[30], vn;
	double f, i[30], j[30], m[30];
	string b, c, d, h[30];
	ifstream fd("orders.txt");
	for (int o = 0; !fd.eof(); o++)
	{
		fd >> a >> b >> c >> d >> e >> f >> vn;
		for (int p = 0; p < e; p++)
		{
			fd >> g[p] >> h[p] >> i[p] >> j[p] >> m[p];
		}

		Orderiai[o].Ivedimas(a, b, c, d, e, f, g, h, i, j, m, vn);
		n++;
		if (Orderiai[o].GetNo() < 0) Orderiai[o].Nunulinimas();
	}
	n--;
	fd.close();
}

void OrderIvedimas(Orders Orderiai[], int n)
{
	int a, e, g[30], vn;
	double f, i[30], j[30], m[30];
	string b, c, d, h[30];
	ofstream fr("orders.txt");
	for (int l = 0; l < n; l++)
	{
		Orderiai[l].Isvedimas(a, b, c, d, e, f, g, h, i, j, m, false, vn);
		//cout << a <<' ' << b << ' ' << c << endl;
		if (Orderiai[l].GetNo() != -1000)
		{
			fr << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << ' ' << vn << endl;
			for (int t = 0; t < e; t++)
			{
				if (g[t] != -1000) fr << g[t] << ' ' << h[t] << ' ' << i[t] << ' ' << j[t] << ' ' << m[t] << endl;
			}
		}
	}
	fr.close();
}

int main()
{
	while (true)Veikimas(Interface());				//Pastoviai veikiantis ciklas
	return 0;
}

