#include <stdio.h>
#include <stdlib.h>
#define A 5

typedef struct
{
    float DNI;
    char nombre[50];
    char apellido[50];
    int estaVacio;
}ePersona;

ePersona pedirPersona();
void mostrarPersona(ePersona persona);


int main()
{
    ePersona persona;
    //InicializarPersonas(persona);
    //mostrarMenu();
    pedirPersona();
    mostrarPersona(persona);

    return 0;
}

ePersona pedirPersona(persona miPersona)
{
     ePersona miPersona;

    printf("Ingrese DNI: ");
    scanf("%f", &miPersona.DNI);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miPersona[i].nombre);
    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(miPersona[i].apellido);

    return miPersona;
}

int validarDNI(ePersona pesonas, int DNI, int cant)
{
    int i;
    int salida = 0;
    for(i=0;i<cant;i++)
    {
        if(personas[i]-estaVacio==0 &&)
        {
            salida = 1;
        }
    }
    return salida;
}

void ordenarPorDni(ePersona p[], int cant)
{
    int i;
    int j;
    ePersona auxPer;
    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;i++)
        {
            if(p[i].DNI<p[j].DNI)
            {
                auxPer = p[i];
                p[i] = p[j];
                p[j] = auxPer;
            }
        }
    }

}

void mostrarPersona(persona)
{
    printf("%f--%s--%s\n", persona.DNI, persona.nombre, persona.apellido);
}

// A partir de acá estoy mas perdido que huerfano en dia del padre
/*
InicializarPersonas(ePersona p[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        p[i].estaVacio = 1;
    }
}

pedirPersona(ePersona p[], int cant)
{
    int i;
    int flagEncontro = 0;
    for(i=0;i<cant;i++)
    {
        if(p[i].estaVacio==1)
        {
            pedir(p, i);
            flagEncontro = 1;
            return;
        }
    }
    if(flagEncontro == 0)
        printf("No hay mas espacio");
}*/

