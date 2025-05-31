
#ifndef _MAIN
#define _MAIN

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/parte2/Array.hpp"
#include "biblioteca/tads/parte2/Map.hpp"
#include "biblioteca/tads/parte2/List.hpp"
#include "biblioteca/tads/parte2/Stack.hpp"
#include "biblioteca/tads/parte2/Queue.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/MultidimColl.hpp"
using namespace std;

int main()
{
   string s = "A";
   char c = stringToChar(s);
   cout << c << endl; // muestra: A
   cout << (int)c << endl; // muestra: 65
   s = " ";
   c = stringToChar(s);
   cout << c << endl; // muestra: [VACIO]
   cout << (int)c << endl; // muestra: 32, ASCII de ' '
   return 0;
}
#endif
