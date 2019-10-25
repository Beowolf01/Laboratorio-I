#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    char mail[50];
    float sueldo;
}eEmpleado;

int main()
{
    FILE* pArchivo;
    int i;
    char id[50];
    char nombre[50];
    char apellido[50];
    char mail[50];
    float sueldo;

    eEmpleado lista[50];
    eEmpleado unEmpleado;

    pArchivo = fopen("Empleados.csv","r");

    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, apellido, mail, sueldo);

        unEmpleado.id = atoi(id);
        strcpy(unEmpleado.nombre,nombre);
        strcpy(unEmpleado.apellido,apellido);
        strcpy(unEmpleado.mail,mail);
        unEmpleado.sueldo = atof(sueldo);

        lista[i]=unEmpleado;
        i++;


    }
        fclose(pArchivo);

        for(i=0;i<50;i++)
        {
            if(lista[i]>5000)
            {
                printf("%d--%s--%s--%s--%f\n", lista[i].id, lista[i].nombre, lista[i].apellido, lista[i].mail, lista[i].sueldo);
            }
        }


    return 0;
}
