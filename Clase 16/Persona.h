#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    //char nombre[50];
    int edad;
    float altura;
}ePersona;

ePersona* new_Persona();//constructor por defecto, inicializa todo en 0.
int mostrarPersona(ePersona*);
int delete_Persona(ePersona*);
ePersona* new_Persona_Parametros(int, int, float);
