#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"


int main()
{
    ePersona* lista[3];
    int i;
    int legajo;
    char sexo;
    float altura;


    for(i=0;i<3;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);
        printf("Ingrese sexo");
        sexo = getche();
        printf("\n");
        printf("Ingrese altura");
        scanf("%f", &altura)

        unaPersona = new_Persona_Parametros(legajo, sexo, altura);

        lista[i]=unaPersona
    }

    for(i=0; i<3; i++)
    {
        mostrarPersona(lista[i]);
    }
   /* ePersona* pPersona;
    pPersona = new_Persona_Parametros(100,40,1.87);

    printf("La persona es: \n");

    if(setLegajo(pPersona, 950)==1)
    {
        if(getLegajo(pPersona)>900 && getLegajo(pPersona)<1000)
        {
            mostrarPersona(pPersona);
        }
        else
        {
            printf("No se encontro");
        }
    }
    else
    {
        printf("No se pudo asignar legajo");
    }



    delete_Persona(pPersona);*/
    return 0;
}

