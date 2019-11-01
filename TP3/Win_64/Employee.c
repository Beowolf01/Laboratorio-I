#include "Employee.h"
#include <string.h>
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr)
{
    Employee* empleado;
    empleado = malloc(sizeof(Employee));//Esto deberia ir al por defecto y despues llamarlo acá.

    empleado->id = atoi(idStr);
    strcpy(empleado->nombre, nombreStr);
    empleado->horasTrabajadas = atoi(horasTrabajadasStr);

    return empleado;
}

int comparaPorNombre(void*, void*)
{
    Employee* e1 = (Employee*) p1;
    Employee* e2 = (Employee*) p2;

    return strcmp(e1->nombre, e2->nombre);
}

