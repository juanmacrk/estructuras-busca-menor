#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

///estructuras

typedef struct
{
    int nota;
    int matricula;
    char nombre[30];
    char apellido[30];
} stAlumno;

stAlumno cargaUnAlumno ();
void muestraUnAlumno ();

#endif // ALUMNO_H_INCLUDED
