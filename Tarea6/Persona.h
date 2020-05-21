#ifndef PERSONA_H
#define PERSONA_H

class Persona{
    private:
        char nombre[100];
        char nacionalidad[100];
    public:
        Persona();
        Persona(char[],char[]);
        void toString();
};

#endif // PERSONA_H
