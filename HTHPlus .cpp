#include "HTHPlus .h"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include "Pelicula.h"
#include <vector>


HTHPlus ::HTHPlus ()
{
}
	 
 
	
	vector <Pelicula*> HTHPlus :: getPelicula(){
		return this->peliculas;
	}
	void HTHPlus :: porGenero(string genero){
		
	}
	void HTHPlus ::  Encontrar(string pelicula){
		
	}
	void HTHPlus :: Ordenar(){
		
	}

	void HTHPlus :: addPelicula(Pelicula* pelicula){	
		peliculas.push_back(pelicula);
	}
	void HTHPlus :: modifyPelicula(int){
		
	}
	void HTHPlus :: eliminarPelicula(int){
		
	}
		
HTHPlus ::~HTHPlus ()
{
}