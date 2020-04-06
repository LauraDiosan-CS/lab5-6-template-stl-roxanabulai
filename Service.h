#pragma once
#include "RepositorySTL.h"
#include "Rezervare.h"
#include "RepoFile.h"
#include <list>
#include "UtilizatorRez.h"
using namespace std;

class Service
{
private:
	RepositorySTL<Rezervare> repo;
	RepositorySTL<UtilizatorRez> repo2;
public:
	Service();
	Service(RepositorySTL<Rezervare>& );
	void setRepo(RepositorySTL<Rezervare>&);
	void addRezervare(Rezervare& r);
	int delRezervare(Rezervare& r);
	list<Rezervare> getAll();
	void updateRezervare(Rezervare& r, int, char*, int);
	int findOne(Rezervare& r);
	int functionalitate1(UtilizatorRez& rez);

	~Service();
};

