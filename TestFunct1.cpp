#include "utilizatorRez.h"
#include "TestsFunct1.h"
#include <assert.h>
void testFunct1() {
	//static
	UtilizatorRez r;//implicit const
	assert((r.getCod() == 0) && (r.getNume() == NULL) && (r.getLoc() == 0) && (r.get_loc_disp()==0));

	int cod1;
	cod1 = 10;
	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "Rox", "Rox");
	int loc1;
	loc1 = 13;
	int loc_disp = 20;
	Rezervare r1(cod1, nume1, loc1);//const with param
	UtilizatorRez Rez1(cod1, nume1, loc1, loc_disp);
	assert((r1.getCod() == 10) && (strcmp(r1.getNume(), "Rox") == 0) && (r1.getLoc() == 13));

	//dynamic
	UtilizatorRez* r2;
	r2 = new UtilizatorRez();//implicit constr
	assert((r2->getCod() == 0) && (r2->getNume() == NULL) && (r2->getLoc() == 0) && (r2->get_loc_disp()==0));

	int cod2;
	cod2 = 20;
	char* nume2 = new char[10];
	strcpy_s(nume2, sizeof "Ioana", "Ioana");
	int loc2;
	loc2 = 15;
	int loc_disp2;
	loc_disp2 = 24;
	UtilizatorRez* r3 = new UtilizatorRez(cod2, nume2, loc2, loc_disp2);//const by param
	assert((r3->getCod() == 20) && (strcmp(r3->getNume(), "Ioana") == 0) && (r3->getLoc() == 15) && (r3->get_loc_disp()==24));
	if (r3 != NULL) {
		delete r3;//destructor
		r3 = NULL;
	}

}