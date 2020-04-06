#pragma once
#include "Service.h"

class UI {
private:
	Service serv;
	void addRezervare_UI();
	void addUtilizatorRez_UI();
	void findRezervare_UI();
	void deleteRezervare_UI();
	void updateRezervare_UI();
	void showAll_UI();

public:
	UI();
	UI(Service&);
	void showUI();
	~UI();

};
