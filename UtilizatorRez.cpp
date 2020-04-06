#include "UtilizatorRez.h"
#include <iomanip>
#include <algorithm>
#include<iostream>
#include "Rezervare.h"
using namespace std;



UtilizatorRez::UtilizatorRez()
{
	loc_disp = 0;
}

UtilizatorRez::UtilizatorRez(int cod, char* nume, int loc, int X) : Rezervare(cod, nume, loc)
{
	loc_disp = X;
}

UtilizatorRez::UtilizatorRez(const UtilizatorRez& sb) : Rezervare(sb)
{
	loc_disp = sb.loc_disp;
}


UtilizatorRez::~UtilizatorRez()
{
}

int UtilizatorRez::get_loc_disp()
{
	return loc_disp;
}

void UtilizatorRez::set_loc_disp(int x)
{
	loc_disp=x;
}

UtilizatorRez& UtilizatorRez::operator=(const UtilizatorRez& sb)
{
	this->Rezervare::operator=(sb);
	this->loc_disp = sb.loc_disp;
	return *this;
}

bool UtilizatorRez::operator==(const UtilizatorRez& r)
{
	return (Rezervare::operator==(r) && (loc_disp == r.loc_disp));
}

istream& operator>>(istream& is, UtilizatorRez& sb) {
	cout << "Dati numarul zborului: ";
	int cod;
	is >> cod;
	cout << "Dati numele: ";
	char* nume = new char[10];
	is >> nume;
	cout << "Dati locul dorit: ";
	int loc;
	is >> loc;
	cout << "Locuri disponibile:";
	int loc_disp;
	is >> loc_disp;
	sb.setNume(nume);
	sb.setCod(cod);
	sb.setLoc(loc);
	sb.set_loc_disp(loc_disp);
	delete[] nume;
	return is;
}

