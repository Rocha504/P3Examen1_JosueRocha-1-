#include "Pelicula.h"
#include <time.h>
#include <string>
using namespace std;
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>

Pelicula::Pelicula()
{
}

	string Pelicula :: getTitulo(){
		return this->titulo;
	}

	void Pelicula :: setTitulo(string titulo){
		this->titulo=titulo;
	}
	string Pelicula :: getDirector(){
		return this->director;
	}
	void Pelicula :: setDirector(string director){
		this->director=director;
	}	
	string Pelicula :: getGenero(){
		return this->genero;
	}
	void Pelicula :: setGenero(string genero){
		this->genero=genero;
	}
	int Pelicula :: getValoracion(){
			return this->valoracion;
	}
	void Pelicula :: setValoracion(){
		srand (time(NULL));
		this->valoracion=rand()%5;
	}

Pelicula::~Pelicula()
{
}