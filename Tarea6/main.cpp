#include <iostream>
#include <cstring>
#include "Pelicula.h"
#include "Persona.h"

using namespace std;

void menu(){
    cout << "---MENU---"<<endl<<endl;
    cout << "1.-Registrar."<<endl<<"2.-Editar."<<endl<<"3.-Eliminar."<<
    endl<<"4.-Consultar director."<<endl<<"5.-Informacion."<<endl;
}
Pelicula registrar(){
    char titulo[100];
    int annio;
    char genero[100];
    char productora[100];
    int minutos;
    char nombre[100];
    char nacionalidad[100];

    cout << "Ingrese el titulo de la pelicula"<<endl;
    cin >>titulo;
    cout<< "Ingrese el annio en que fue producida"<<endl;
    cin >>annio;
    cout<< "Ingrese el genero al que pertenece la pelicula"<<endl;
    cin >>genero;
    cout << "Ingrese la productora de la pelicula"<<endl;
    cin >>productora;
    cout<< "Ingrese la duracion en minutos de la pelicula"<<endl;
    cin>> minutos;
    cout<< "--Director--"<<endl;
    cout<<"Ingrese nombre del director"<<endl;
    cin>> nombre;
    cout<<"Ingrese la nacionalidad del director"<<endl;
    cin >> nacionalidad;
    cout <<"**Pelicula Registrada con exito**"<<endl;

    return Pelicula(titulo,Persona(nombre,nacionalidad),annio,genero,productora,minutos);
}


int main()
{
    Pelicula peliculas[10];
    int opc=0, peliC=0,numPeli=0;
    bool power=true;

    while(power){
        menu();
        cin >> opc;
        switch(opc){
            case 1:
                registrar();
                peliculas[peliC] = registrar();
                peliC++;
                break;
            case 2:
                cout << "Ingrese el numero de la pelicula que desea editar:"<<endl;
                cin >>numPeli;
                peliculas[numPeli].toString();
                peliculas[numPeli] = registrar();
                break;
            case 3:
                cout << "Ingrese el numero de la pelicula que desea eliminar:"<<endl;
                cin >>numPeli;
                peliculas[numPeli] = Pelicula();
                cout <<endl<< "---Pelicula Eliminada---"<<endl;
                break;
            case 4:
                cout <<"Ingrese el numero de Pelicula cuyo director desea consultar"<<endl;
                cin >>numPeli;
                peliculas[numPeli].getDirector();
                break;
            case 5:
                cout<<"Ingrese el numero de película cuya informacion desea consultar"<<endl;
                cin >>numPeli;
                peliculas[numPeli].toString();
                break;
            default:
                power=false;
        }
    }
    return 0;
}
