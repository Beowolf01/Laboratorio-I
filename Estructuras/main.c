#include <stdlib.h>
#include "Alumno.h"
#define A 2

//struct eAlumno asi se encuentra en el apunte y es para autocompletar.

int main()
{
    eAlumno listaAlumnos[A];
    int i;
    int opcion;

    inicializarAlumnos(listaAlumnos, A);

    do
    {
        printf("1.Cargar alumnos\n");
        printf("2.Mostrar alumnos\n");
        printf("3.Ordenar alumnos por nombre\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            cargarAlumnos(listaAlumnos, A);
            //hardcoderAlumnos(listaAlumnos, A);
            break;
        case 2:
            mostrarListadoDeAlumnos(listaAlumnos, A);
            break;
        case 3:
            ordenarAlumnosPorNombre(listaAlumnos, A);
            break;
        }
        system("pause");//Necesario para poder limpiar la consola.
        system("cls");//Para limpiar la consola.
    }while(opcion!=5);














    /*eAlumno otroAlumno;

    miAlumno = pedirAlumno();
    otroAlumno = pedirAlumno();

    if(compararAlumnoPorLegajo(miAlumno, otroAlumno))
       {
           printf("\nLos Alumnos son iguales");
       }
       else
        {
            printf("\nNo son iguales");
        }

    //char cadena[20];

    //scanf("%[^\n]", cadena);
    //int len = strlen(cadena);
    //fgets(cadena, 20, stdin);//Sirve para leer lineas de archivo y es para linux.

    //printf("%s--%d", cadena, len);



    //otroAlumno = miAlumno;

    //mostrarAlumno(miAlumno);



    //printf("%d", sizeof(miAlumno));//la funcion sizeof sirve para saber el peso del dato.*/
    return 0;
}

