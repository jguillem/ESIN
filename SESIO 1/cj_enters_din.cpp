#include "cj_enters_din.hpp"

cj_enters::cj_enters(){
	_inici = new node;
	_inici->seg = NULL;
	_inici->cardinal = 0;
}

cj_enters::node* cj_enters::copia_conjunt(const node* conjunt){
	node* copia = NULL;
	if(conjunt != NULL){
		copia = new node;
		copia->elem = conjunt->elem;
		copia->seg = copia_conjunt(conjunt->seg);
	}
	return copia;
}

void cj_enters::esborra_conjunt(node* n){
	if(n!=NULL){
		esborra_conjunt(n->seg);
		delete n;
	}
}

cj_enters::cj_enters(const cj_enters &cj){
	_inici = copia_conjunt(cj._inici);
}

cj_enters::~cj_enters(){
	esborra_conjunt(_inici);
}

bool cj_enters::conte(int e) const{
	bool conte = false;	
	node* aux;
	aux = _inici->seg;
	cout << "dins conte " << endl;

	while(aux != NULL && aux->elem != e){
		cout << "while del conté" << endl;
		if(aux->elem == e){
			conte = true;
		}
		aux = aux->seg;
	}
	return conte;
}

void cj_enters::insereix(int e){
	node* aux;
	
	if(!conte(e)){
		if(_inici->seg == NULL){
			cout << "insercion del "<< e << endl;
			_inici->cardinal ++;
			aux = new node;
			aux->elem = e;
			aux->seg = NULL;
			_inici->seg = aux;
					
		}else{
			cout << "insercion del "<< e << endl;
			_inici->cardinal ++;
			aux = new node;
			aux->elem = e;
			aux->seg = _inici->seg;
			_inici->seg = aux;

		}
	}	
}

int cj_enters::card() const{
	int card;
	card = _inici->cardinal;
	return card;

}

void cj_enters::print(ostream& os) const{
   	node* aux;
   	aux = _inici->seg; 
	if(_inici->seg != NULL){
	    while(aux != NULL)
	    {
	        os<<aux->elem<< " ";
	        aux = aux->seg;
	    }
	}
}
