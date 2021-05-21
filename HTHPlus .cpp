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
	 
 
	 
	vector <Pelicula*> HTHPlus :: getPeliculas(){
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
	void HTHPlus :: printPeliculas(){
		for(int i=0;i<this->peliculas.size();i++){
			cout<<i<<endl;
			this->peliculas[i]->toString();
			cout<<endl;	
		}
		 		
	}
	
		
HTHPlus ::~HTHPlus ()
{
}