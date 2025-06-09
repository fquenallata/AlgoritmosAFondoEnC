#ifndef _THOUR_TAD_
#define _THOUR_TAD_

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Hour {
    int hora;
    int minuto;
    int segundo;
};

Hour crearHora(int hora, int minuto);

Hour crearHoraCompleta(int hora, int minuto, int segundo);

Hour horaNula();

string horaAString(Hour h);

void mostrarHora(Hour h);

bool esHoraValida(Hour h);

int aMinutos(Hour h);

int aSegundos(Hour h);

Hour desdeMinutos(int minutos);

Hour normalizarHora(Hour h);

int diferenciaEnMinutos(Hour a, Hour b);

int diferenciaEnSegundos(Hour a, Hour b);
