#ifndef PRODUS_H
#define PRODUS_H
#include <string>
#include<ostream>
using namespace std;
class Rezervare
{
private:
	int cod;
	char* nume;
	int loc;

public:
	Rezervare(); //constructor
	Rezervare(int, char*, int); //constructor
	Rezervare(const Rezervare&); //constructor

	int getCod();
	char* getNume();
	int getLoc();

	void setCod(int);
	void setNume(char*);
	void setLoc(int);

	Rezervare& operator=(const Rezervare&);
	bool operator==(const Rezervare&);
	~Rezervare(); //destructor

	friend ostream& operator<<(ostream& os, const Rezervare& s);
	friend istream& operator>>(istream&, Rezervare&);
};
#endif
