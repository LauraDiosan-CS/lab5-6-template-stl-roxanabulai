#include "TestsRezervare.h"
#include "TestsRepositorySTL.h"
#include "TestsService.h"
#include "UI.h"
#include <iostream>
#include "Rezervare.h"
#include "UtilizatorRez.h"
#include "TestsFunct1.h"
using namespace std;

int main()
{
	testFunct1();
	testConstructors();
	//Teste REPO
	TestRepoAdd();
	TestRepoUpdate();
	TestRepoRemove();
	
	//Teste Service
	TestService testservice;
	testservice.testAll();
	// UI
	Service serv;
	UI ui;
	ui.showUI();
	cout << "succes";
	
	return 0;
}
//ala era un main care trb inchis, era alt proiect