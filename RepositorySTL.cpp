#include "RepositorySTL.h"

template<class Elem>
void RepositorySTL<Elem>::addItem(Elem r) {
	elem.push_back(r);
}
template<class Elem>
list<Elem> RepositorySTL<Elem>::getAll() {
	return elem;
}