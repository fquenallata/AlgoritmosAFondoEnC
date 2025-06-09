#ifndef _TTIME_TAD_
#define _TTIME_TAD_

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Timer {
    int horas;
    int minutos;
    int segundos;
};

Timer crearTimer(int horas, int minutos, int segundos);

Timer desdeSegundos(int totalSegundos);

Timer timerNulo();

Timer iniciarTimer(); // comienza desde cero

Timer reiniciarTimer(Timer t);

Timer pausarTimer(Timer t); // si manejás estados (opcional)

Timer reanudarTimer(Timer t);

Timer sumarTimers(Timer a, Timer b);

Timer restarTimers(Timer a, Timer b);

Timer agregarSegundos(Timer t, int s);

Timer agregarMinutos(Timer t, int m);
