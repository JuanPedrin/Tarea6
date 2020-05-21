#ifndef PELICULA_H
#define PELICULA_H
#include "Persona.h"

class Pelicula
{
    private:
        char titulo[100];
        Persona director;
        int annio;
        char genero[100];
        char productora[100];
        int minutos;
    public:
        Pelicula();
        Pelicula(char[],Persona,int,char[],char[],int);
        void toString();
        void getDirector();
};

#endif // PELICULA_H
