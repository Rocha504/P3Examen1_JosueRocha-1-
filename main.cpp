#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <string>
using namespace std;
#include "Pelicula.h"
#include "HTHPlus .h"
#include <vector>
 

int menu();

int main(int argc, char** argv) {
	
	HTHPlus* Hobject =new HTHPlus();
	Pelicula* Pobject=new Pelicula();
	int op=menu();
	switch(op){
		case 1:{
			string title,directoro,genre;
			int rating= Pobject->setValoracion();
			cout<<"Ingrese el Titulo de la pelicula"<<endl;
			cin>>title;
			cout<<"Ingrese el Director de la pelicula"<<endl;
			cin>>directoro;
			cout<<"Ingrese el Genero de la pelicula"<<endl;
			cin>>genre;
			Hobject->addPelicula(new Pelicula*(title,directoro,genre,rating));
			}
			break;
		case 2:{
			 
		}
		break;		
		}
	return 0;
}

int menu(){
	
	int op;
	cout<<"     BIENVENIDO     "<<endl;
	cout<<"1. Agregar pelicula"<<endl;
	cout<<"2. Modificar pelicula"<<endl;
	cout<<"3. Eliminar pelicula"<<endl;
	cout<<"4. Imprimir peliculas por genero "<<endl;
	cout<<"5. Buscar pelicula"<<endl;
	cout<<"6. Imprimir peliculas por valoracion"<<endl;
	cout<<"7. Salir"<<endl<<endl;
	cout<<"Porfavor ingrese una opcion"<<endl;
	cin>>op;
	
	return op;
}

		 