/*#pragma once
#include "RepositorySTL.h"

template<class Elem>
class RepositoryFile:
	public RpositorySTL<Elem>
{
private:
	const char* fis;	
public:
	RepositoryFile();
	RepositoryFile(const char* fileName);
	void loadFromFile(const char* fileName);
	~RepositoryFile();
};

template<class Elem>
RepositoryFile<Elem>::RepositoryFile()
{

}
template<class Elem>
RepositoryFile<Elem>::RepositoryFile(const char* fileName)
{
	fis = fileName;
	ifstream f(fileName);
	string linie;
	char* nume = new char[10];
	int varsta;
	while (!f.eof()) {
		f >> nume >> varsta;
		if (nume != "") {
			Student s(nume, varsta);
			elem.push_back(s);
		}
	}
	delete[] nume;
	f.close();
}
template<class Elem>
void RepositoryFile<Elem>::loadFromFile(const char* fileName)
{
	elem.clear();
	fis = fileName;
	ifstream f(fileName);
	char* nume = new char[10];
	int cod;
	int loc;
	while (!f.eof()) {
		f >> cod>>nume >> loc;
		if (strcmp(nume, "") != 0) {
			Rezervare r(cod, nume, loc);
			elem.push_back(s);
		}
	}
	delete[] nume;
	f.close();
}
template<class Elem>
RepositoryFile<Elem>::~RepositoryFile()
{

}
*/