#include <iostream>
#include <cstring>
#include "Persona.h"
using namespace std;

Persona::Persona(){

}
Persona::Persona(char nombre[100],char nacionalidad[100])
{
    strcpy(this->nombre,nombre);
    strcpy(this->nacionalidad,nacionalidad);
}
void Persona::toString(){
    cout <<"---Director---"<<endl;
    cout <<"Nombre: "<<this->nombre<<endl;
    cout <<"Nacionalidad: "<<this->nacionalidad<<endl<<endl;
}
