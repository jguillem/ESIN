#include "cj_enters_din.hpp"

cj_enters::cj_enters(){
	_inici = new node;	
	_inici->seg = NULL;
}
cj_enters::node* cj_enters::copiaConjunt(const node* origen){
	node* desti = NULL;
	if(origen != NULL){
		desti = new node;
		desti->elem = origen->elem;
		desti->seg = copiaConjunt(origen->seg);	
	}
	return desti;
}
cj_enters::cj_enters(const cj_enters &cj){
	_inici = copiaConjunt(cj._inici);
}

//cj_enters::~cj_enters();
//cj_enters::cj_enters& cj_enters::operator=(const cj_enters &cj);

//void cj_enters::insereix(int e);
//void cj_enters::unir(const cj_enters& B); 
//void cj_enters::intersectar(const cj_enters& B);
//void cj_enters::restar(const cj_enters& B);

//cj_enters cj_enters::operator+(const cj_enters& B) const;
//cj_enters cj_enters::operator*(const cj_enters& B) const;
//cj_enters cj_enters::operator-(const cj_enters& B) const;

//bool cj_enters::conte(int e) const;

//int cj_enters::max() const;
//int cj_enters::min() const;

//int cj_enters::card() const;

//bool cj_enters::operator==(const cj_enters& B) const;
//bool cj_enters::operator!=(const cj_enters& B) const;

//void cj_enters::print(ostream& os) const;

