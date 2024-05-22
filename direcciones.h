#ifndef DIRECCIONES_H_INCLUDED
#define DIRECCIONES_H_INCLUDED

typedef struct{

    char provincia[1];
    char localidad[2];
    char calle[3];
    int altura;

}stDirecciones;

stDirecciones cargaUnaDireccion();
void muestraUnaDireccion();

#endif // DIRECCIONES_H_INCLUDED
