
#include "Service.h"
#include "UI.h"
#include <iostream>
#include <Windows.h>
#include "UtilizatorRez.h"
using namespace std;

UI::UI()
{
}

UI::UI(Service& s)
{
	serv = s;
}
/*void UI::addRezervare_UI() {
	int cod;
	cout << "Dati numarul zborului: ";
	cin >> cod;
	char* nume = new char[10];
	cout << "Dati numele:";
	cin >> nume;
	int loc;
	cout<< "Dati numarul locului:";
	cin >> loc;
	Rezervare r(cod, nume, loc);
	serv.addRezervare(r);
	cout << "Rezervarea a fost adaugata cu succes!" << endl;
}*/

void UI::addUtilizatorRez_UI()
{
	int cod;
	cout << "Dati numarul zborului: ";
	cin >> cod;
	char* nume = new char[10];
	cout << "Dati numele:";
	cin >> nume;
	int loc;
	cout << "Dati numarul locului dorit:";
	cin >> loc;
	int loc_disp;
	cout << "Locuri disponibile: ";
	cin >> loc_disp;
	UtilizatorRez rez(cod, nume, loc, loc_disp);
	Rezervare r(cod, nume, loc);
	if(serv.functionalitate1(rez)==1)
	{
		serv.addRezervare(r); cout << "Rezervarea a fost realizata cu succces! ";
	}
	if(serv.functionalitate1(rez)==0)
	{
		cout << endl;
		cout << "Locul dorit nu este disponibil!" << endl;
		cout << "Puteti alege un loc liber din lista: ";
		for (int i = 1; i <= loc_disp; i++)
			cout << i << ",";
	}
	if(serv.functionalitate1(rez)==-1)
			cout << "Nu exista locuri dispobibile! ";

}

void UI::findRezervare_UI() {
	int cod;
	cout << "Dati numarul zborului: ";
	cin >> cod;
	char* nume = new char[10];
	cout << "Dati numele:";
	cin >> nume;
	int loc;
	cout << "Dati numarul locului:";
	cin >> loc;
	Rezervare r(cod, nume, loc);
	int rez = serv.findOne(r);
	if (rez!=-1) cout << "Rezervarea a fost gasita!" << endl;
	else cout << "Rezervarea NU a fost gasita!" << endl;
	delete[]nume;
}

void UI::deleteRezervare_UI() {
	int cod;
	cout << "Dati numarul zborului: ";
	cin >> cod;
	char* nume = new char[10];
	cout << "Dati numele:";
	cin >> nume;
	int loc;
	cout << "Dati numarul locului:";
	cin >> loc;
	Rezervare r(cod, nume, loc);
	int rez = serv.delRezervare(r);
	if (rez == 0) cout << "Rezervarea a fost  stearsa cu succes!" << endl;
	else cout << "Rezervarea NU a fost stearsa pentru ca NU EXISTA!" << endl;
}

void UI::updateRezervare_UI()
{
	int cod;
	cout << "Dati numarul zborului: ";
	cin >> cod;
	char* nume = new char[10];
	cout << "Dati numele:";
	cin >> nume;
	int loc;
	cout << "Dati numarul locului:";
	cin >> loc;
	Rezervare r(cod, nume, loc);
	int rez = serv.findOne(r);
	if (rez !=-1) {
		int cod_nou;
		cout << endl;
		cout << "Dati numarul zborului actualizat: ";
		cin >> cod_nou;
		char* nume_nou = new char[10];
		cout << "Dati numele actualizat:";
		cin >> nume_nou;
		int loc_nou;
		cout << "Dati numarul locului actualizat:";
		cin >> loc_nou;
		
		serv.updateRezervare(r, cod_nou, nume_nou, loc_nou);
		cout << "Rezervarea a fost actualizata cu succes!";
	}
	else cout << "Rezervarea NU a fost actualizata pentru ca NU EXISTA!" << endl;
}

void UI::showAll_UI() {
	cout << "!!! TOATE REZERVARILE !!!" << endl;
	cout << endl;
	list<Rezervare> zboruri = serv.getAll();
	for (Rezervare r : zboruri)
		cout << r;
	cout << endl;
	cout << "        | ----------------------------|" << endl;
}

void UI::showUI()
{
	bool gata = false;
	while (!gata) {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_BLUE);
		cout << endl;
		cout << "OPTIUNI: " << endl;
		cout << "	1. Adauga rezervare(daca sunt locuri disponibile) " << endl;
		cout << "	2. Cauta rezervare " << endl;
		cout << "	3. Sterge rezervare " << endl;
		cout << "	4. Afiseaza toate rezervarile " << endl;
		cout << "	5. Actualizare rezervare " << endl;
		cout << "	0. EXIT!" << endl;
		cout << "Introduceti optiunea (prin numarul ei): " << endl;
		int opt;
		cin >> opt;
		SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
		switch (opt) {
		//case 1: {addRezervare_UI(); break; }
		case 1: {addUtilizatorRez_UI(); break; }
		case 2: {findRezervare_UI(); break; }
		case 3: {deleteRezervare_UI(); break; }
		case 4: {showAll_UI(); break; }
		case 5: {updateRezervare_UI(); break; }
		case 0: {gata = true; cout << "LA REVEDERE!" << endl; }
		default: {cout << "OPTIUNEA NU EXISTA! VA RUGAM SELECTATI UNA DIN OPTIUNILE EXISTENTE:" << endl; }
		}
	}
}

UI::~UI()
{
}

