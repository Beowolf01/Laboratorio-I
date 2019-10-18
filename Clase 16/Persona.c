#include "Persona.h"

ePersona* new_Persona()
{
    ePersona* miPersona;

    miPersona = calloc(sizeof(ePersona),1);

    return miPersona;
}
int mostrarPersona(ePersona* unaPersona)
{
    int ret = -1;
    if(unaPersona!=NULL)
    {
            printf("%d--%d--%f", unaPersona->legajo, unaPersona->edad, unaPersona->altura);

            ret = 1;
    }
    return ret;
}

int delete_Persona(ePersona* unaPersona)
{
    int ret = -1;
    if(unaPersona!=NULL)
    {
            free(unaPersona);

            ret = 1;
    }
    return ret;
}

ePersona* new_Persona_Parametros(int legajo, int edad, float altura)
{
    ePersona* miPersona = new_Persona();
    if(miPersona!=NULL)
    {
        miPersona->legajo = legajo;
        miPersona->edad = edad;
        miPersona->altura = altura;
    }

    return miPersona;



}
