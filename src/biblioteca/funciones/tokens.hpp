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

   int posFin;
   return "";
}

void removeTokenAt(string& s,char sep, int i)
{
}

void setTokenAt(string& s,char sep, string t,int i)
{
}

int findToken(string s,char sep, string t)
{
   return 0;
}

#endif
