#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{
   if(isEmpty(s)){
      return 0;
   }
   int resultado = charCount(s,sep) + 1;
   return resultado;
}

void addToken(string& s,char sep,string t)
{
   if(isEmpty(t)) return;

   if(isEmpty(s)){
      s = t;
   }
   else
   {
      s += sep + t;
   }
}

string getTokenAt(string s,char sep, int i)
{
   //si ingresa un nro fuera del rango regresa la cadena entera
   int posInicial = 0;
   int posFinal = 0;

   if(isEmpty(s)) return "";

   if(i == 0)
   {
      posFinal = indexOfN(s,sep,i+1);
      return substring(s,0,posFinal);
   }

   posInicial = indexOfN(s,sep,i);
   posFinal = indexOfN(s,sep,i+1);

   if(posFinal!=-1)
   {
      return substring(s, posInicial+1, posFinal);
   }
   else
   {
      return substring(s, posInicial+1);
   }
}

void removeTokenAt(string& s,char sep, int i)
{
   //si i es superior al rango retorna vacio;
   int posInicial = 0;
   int posFinal = 0;

   int cantidadTokens = tokenCount(s, sep);
   if (i < 0 || i >= cantidadTokens) return;

   if (i == 0)
   {
       posInicial = indexOfN(s, sep, 1);
       if (posInicial == -1)
           s = "";
       else
           s = substring(s, posInicial + 1);
       return;
   }

   //del token
   posInicial = indexOfN(s,sep,i);
   posFinal = indexOfN(s,sep,i+1);

   if(posFinal!=-1)
   {
      string ladoIzquierdo = substring(s,0,posInicial);
      string ladoDerecho = substring(s,posFinal);
      s = ladoIzquierdo + ladoDerecho;
   }
   else
   {
      s = substring(s,0,posInicial);
   }
}

void setTokenAt(string& s,char sep, string t,int i)
{
   int posInicial = 0;
   int posFinal = 0;
   int cantidadTokens = tokenCount(s, sep);

   //si cantidad = 0 no deberia cambiar nada
   if (i <= 0 || i >= cantidadTokens) return;

   if (i == 0)
   {
      posInicial = indexOfN(s, sep, 1);
      if (posInicial == -1)
      {
         s = t;
      }
      else
      {
         s = t + substring(s, posInicial + 1);
      }
      return;
   }

   posInicial = indexOfN(s,sep,i) + 1;
   posFinal = indexOfN(s,sep,i+1);

   if(posFinal == -1)
   {
      s = substring(s,0,posInicial) + t;
   }
   else
   {
      string ladoIzquierdo = substring(s,0,posInicial);
      string ladoDerecho = substring(s,posFinal);
      s = ladoIzquierdo + t + ladoDerecho;
   }
}

int findToken(string s, char sep, string t)
{
    if (isEmpty(s)) return -1;

    int count = 0;
    int start = 0;
    int end = 0;

    while (true)
    {
        end = indexOfN(s, sep, count + 1);
        string token;

        if (end == -1)
            token = substring(s, start);
        else
            token = substring(s, start, end);

        if (token == t) return count;

        if (end == -1) break;

        start = end + 1;
        count++;
    }
    return -1;
}

#endif
