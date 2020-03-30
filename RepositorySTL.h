#pragma once
#pragma once
#include "Rezervare.h"
#include <list>

using namespace std;
template<class Elem> 

class RepositorySTL
{
private:
	list<Elem> elem;

public:
	void addItem(Elem);
	list<Elem> getAll();
	
	
};



