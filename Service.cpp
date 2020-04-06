#include "Service.h"
#include <list> 
using namespace std;


Service::Service()
{
}
Service::Service(RepositorySTL<Rezervare>& r)
{
	repo = r;
}

void Service::setRepo(RepositorySTL<Rezervare>& r)
{
	repo = r;
}

void Service::addRezervare(Rezervare& r)
{
	repo.addItem(r);
}

int Service::delRezervare(Rezervare& r)
{
	return repo.delElem(r);
}

list<Rezervare> Service::getAll()
{
	return repo.getAll();
	//list<Rezervare> rez=repo.getAll();
	//list<Rezervare> v(rez.begin(),rez.end());
	//return v;
	//deca nu merge ala asta sigur merge;
}

void Service::updateRezervare(Rezervare& r,int c, char* n, int l)
{
	repo.updateElem(r, c, n, l);

}

int Service::findOne(Rezervare& r)
{
	return repo.findElem(r);
}

Service::~Service()
{
}

int Service::functionalitate1(UtilizatorRez& rez)
{
	if (rez.getLoc() < rez.get_loc_disp())

		return 1;

	if (rez.get_loc_disp() == 0)
		return -1;
	return 0;
}