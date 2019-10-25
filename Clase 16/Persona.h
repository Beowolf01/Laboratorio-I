#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    //char nombre[50];
    char sexo;
    float altura;
}ePersona;

ePersona* new_Persona();//constructor por defecto, inicializa todo en 0.
int mostrarPersona(ePersona*);
int setLegajo(ePersona*, int);
int getLegajo(ePersona*);
int delete_Persona(ePersona*);
ePersona* new_Persona_Parametros(int, char, float);
