#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
#include <time.h>
#include <vector>
 

class Pelicula
{
	
	
	private:
		string titulo;
		string director;
		string genero;
		int valoracion;
		
	public:
		Pelicula(string,string,string, int);
		Pelicula();
		~Pelicula();
		string getTitulo();
		void setTitulo(string);
		string getDirector();
		void setDirector(string);	
		string getGenero();
		void setGenero(string);
		int getValoracion();
		int setValoracion();
		
	
};

#endif