#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include "alumno.h"


///funcion carga de un alumno

stAlumno cargaUnAlumno ()
{
    stAlumno a;
    printf ("Carga de un alumno \n");

    printf ("Matricula: ");
    scanf("%d",&a.matricula);
    fflush(stdin);
    printf ("Apellido:");
    gets(a.apellido);
    fflush(stdin);
    printf ("Nombre:");
    gets(a.nombre);
    printf ("Nota:");
    scanf("%d",&a.nota);

    return a;
}
///funcion muestra de un alumno

void muestraUnAlumno (stAlumno a)
{
    printf ("\n==================================================\n");
    printf ("\Matricula.........:%d\n",a.matricula);
    printf ("\Nombre............:%s %s\n",a.apellido,a.nombre);
    printf ("Nota..............:%d",a.nota);
    printf ("\n==================================================\n");
}
