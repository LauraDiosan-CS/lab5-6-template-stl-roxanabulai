#pragma once
#ifndef TESTE_H
#define TESTE_H
#include <string>
#include<iostream>
#include "RepositorySTL.h"
using namespace std;
template<class Elem>
class Teste
{
private:
	RepositorySTL<Elem> elem;
public:
	void TestsRepo(RepositorySTL<Elem>);
};
#endif