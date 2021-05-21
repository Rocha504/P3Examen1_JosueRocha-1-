#ifndef HTHPLUS__H
#define HTHPLUS__H
#include "Pelicula.h"
#include <string>
using namespace std;
#include <vector>
 

class HTHPlus 
{
	
	private:
		vector <Pelicula*> peliculas;
		
	public:
		HTHPlus ();
		~HTHPlus ();
		void porGenero(string genero);
		void Encontrar(string pelicula);
		void Ordenar();
		void addPelicula(Pelicula*);
		void modifyPelicula(int,Pelicula*);
		void eliminarPelicula(int);
		void printPeliculas();
		vector <Pelicula*> getPeliculas();
		
			
		
			
		
		
 
};

#endif