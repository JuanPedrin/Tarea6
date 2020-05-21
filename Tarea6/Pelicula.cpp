#include "Pelicula.h"
#include "Persona.h"
#include <iostream>
#include <cstring>
using namespace std;

Pelicula::Pelicula()
{

}

Pelicula::Pelicula(char titulo[100],Persona director,int annio,char genero[100],char productora[100],int minutos){
    strcpy(this->titulo,titulo);
    this->director=director;
    this->annio=annio;
    strcpy(this->genero,genero);
    strcpy(this->productora,productora);
    this->minutos=minutos;
}

void Pelicula::getDirector(){
    this->director.toString();
}

void Pelicula::toString(){
    cout <<"Titulo: "<<this->titulo<<endl;
    cout <<"Annio: "<<this->annio<<endl;
    cout <<"Genero: "<<this->genero<<endl;
    cout <<"Productora: "<<this->productora<<endl;
    cout <<"Duracion: "<<this->minutos<<endl;
}
