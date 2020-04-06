#pragma once
#pragma once
#include "rezervare.h"
class UtilizatorRez :
	public Rezervare
{
private:
	int loc_disp;
public:
	UtilizatorRez();
	UtilizatorRez(int, char*, int, int);
	UtilizatorRez(const UtilizatorRez&);
	~UtilizatorRez();
	int get_loc_disp();
	void set_loc_disp(int);
	UtilizatorRez& operator=(const UtilizatorRez&);
	bool operator==(const UtilizatorRez&);
	//friend ostream& operator<<(ostream&, UtilizatorRez&);
	friend istream& operator>>(istream&, UtilizatorRez&);
};

