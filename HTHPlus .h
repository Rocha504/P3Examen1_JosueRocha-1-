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
		vector <Pelicula*> getPelicula();
		void addPelicula(Pelicula);
		void modifyPelicula(int);
		void eliminarPelicula(int);
		
			
		
			
		
		
 
};

#endif