#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "Cliente.h"

struct ReservaClase {
    int codigo;
    eTipoClase TipCla;
    sFechaReserva FecRes;
    sHoraReserva HorRes;
}; typedef struct ReservaClases sReservaClases;

struct ReservaMusculacion {
    int codigo;
    sFechaReserva FecRes;
    sHoraReserva HorRes;
}; typedef struct ReservaMusculacion sReservaMusculacion;

#endif