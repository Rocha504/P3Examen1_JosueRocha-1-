#include "Pelicula.h"
#include <time.h>
#include <string>
using namespace std;
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>

Pelicula::Pelicula(string titulo,string director, string genero, int valoracion)
{
	this->titulo=titulo;
	this->director=director;
	this->genero=genero;
	this->valoracion=valoracion;
	
}
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
	int Pelicula :: setValoracion(){
		srand (time(NULL));
		int x= rand()%5;
		return x;
	}
	void Pelicula :: toString(){
		cout<<"Titulo: ";
		cout<<this->titulo;
		cout<<endl;
		cout<<"Director: ";
		cout<<this->director;
		cout<<endl;
		cout<<"Genero: ";
		cout<<this->genero;
		cout<<endl;
		cout<<"Valoracion: ";
		cout<<this->valoracion;
		cout<<"/5";
		cout<<endl;
	}
Pelicula::~Pelicula()
{
}