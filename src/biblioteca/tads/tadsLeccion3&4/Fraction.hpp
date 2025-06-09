#ifndef _TFRAC_TAD_
#define _TFRAC_TAD_

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Fraction{
   int numerador;
   int denominador;
};

Fraction fraccionNula()
{
   Fraction f;
   f.numerador = 0;
   f.denominador = 0;
   return f;
}

Fraction crearFraccion(int numerador, int denominador)
{

   if(denominador == 0)
   {
      cout << "ERROR: El denominador no puede ser cero" << endl;
      return fraccionNula();
   }

   if (denominador < 0) {
       numerador = -numerador;
       denominador = -denominador;
   }

   Fraction f;
   f.numerador = numerador;
   f.denominador = denominador;
   return f;
}

Fraction sumarFracciones(Fraction a, Fraction b);

Fraction restarFracciones(Fraction a, Fraction b);

Fraction multiplicarFracciones(Fraction a, Fraction b);

Fraction dividirFracciones(Fraction a, Fraction b);

Fraction simplificarFraccion(Fraction f);

Fraction invertirFraccion(Fraction f); // da la inversa

Fraction negativaFraccion(Fraction f); // cambia el signo

int esFraccionValida(Fraction f);

int sonFraccionesIguales(Fraction a, Fraction b);

int esFraccionMayor(Fraction a, Fraction b);

int esFraccionMenor(Fraction a, Fraction b);

void mostrarFraccion(Fraction f);

