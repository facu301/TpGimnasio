#ifndef CUPOS_H
#define CUPOS_H

#include "Cliente.h"

struct CuposClases {
    eTipoClase TipCla;
    eDia dia;
    sHoraReserva Hora[];
    int cupo[];
}; typedef struct CuposClases sCuposClases;

#endif