#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s)
{
   int i = 0;
   while(s[i]!='\0')
   {
      i++;
   }
   return i;
}

int charCount(string s,char c)
{
   int count = 0;
   int len = length(s);
   for(int i = 0 ; i< len; i++)
   {
      if(s[i]==c){
         count ++;
      }
   }
   return 0;
}

string substring(string s,int d,int h)
{
   string resultado = "";
   for(int i=d ; i<h ;i++)
   {
      resultado = resultado + s[i];
   }
   return resultado;
}

string substring(string s,int d)
{
   int i = d;
   string resultado = "";
   while(s[i]!='\0')
   {
      resultado += s[i];
      i++;
   }
   return resultado;
}

int indexOf(string s,char c)
{
   int i = 0;
   while(s[i]!='\0')
   {
      if(s[i]==c){
         return i;
      }
      i++;
   }
   return -1;
}

int indexOf(string s,char c,int offSet)
{
   int i = offSet;
   while(s[i]!='\0')
   {
      if(s[i]==c)
      {
         return i;
      }
      i++;
   }
   return -1;
}

int indexOf(string s,string toSearch)
{
   int i = 0;
   int z = 0;
   int len = length(toSearch);
   while(s[i]!='\0')
   {
      while(toSearch[z]!='\0')
      {
         if(s[i]!=toSearch[z])
         {
            i-=z;
            z=0;
            break;
         }
         i++;
         z++;
      }
      if(toSearch[z]=='\0'){
         return i-len;
      }
      i++;
   }
   return -1;
}

int indexOf(string s,string toSearch,int offset)
{
   int i = offset;
   int z = 0;
   int len = length(toSearch);
   while(s[i]!='\0')
   {
      while(toSearch[z]!='\0')
      {
         if(s[i]!=toSearch[z])
         {
            i-=z;
            z=0;
            break;
         }
         i++;
         z++;
      }
      if(toSearch[z]=='\0'){
         return i-len;
      }
      i++;
   }
   return -1;
}

int lastIndexOf(string s,char c)
{
   int i = 0;
   int len = length(s);
   while(s[i]!='\0')
   {
      if(s[len-i-1]==c){
         return len - i -1;
      }
      i++;
   }
   return -1;
}

int indexOfN(string s,char c,int n)
{
   int i = 0;
   int cont = 0;
   while(s[i]!='\0')
   {
      if(s[i]==c){
         cont++;
         if(cont==n)
         {
            return i;
         }
      }
      i++;
   }
   return -1;
}

int charToInt(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    else if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    else if (c >= 'a' && c <= 'z') return c - 'a' + 10;
    else return -1;
}

char intToChar(int i)
{
   if (i >= 0 && i <= 9) return (char)(i + '0');
   else if (i >= 10 && i <= 35) return (char)(i + 'A' - 10);
   else return '?';
}

int getDigit(int n,int i)
{
   int resultado = n;
   int dividendo = 1;
   if(i > 0)
   {
      for(int z = 0; z < i; z++)
      {
         dividendo*=10;
      }
      resultado = n / dividendo;
   }
   return resultado%10;
}

int digitCount(int n)
{
   int count = 0;
   while(n>0)
   {
      count++;
      n/=10;
   }
   return count;
}

string intToString(int i)
{
   string resultado = "";
   int digit = 0;
   while(i>0)
   {
      digit = i%10;
      resultado = intToChar(digit) + resultado;
      i/=10;
   }
   return resultado;
}

int stringToInt(string s,int b) // ok
{
   int len = length(s);
   int resultado = 0;
   int potencia = 1;

   for(int z = 0; z < len-1; z++)
   {
      potencia*=b;
   }

   for(int i = 0; i < len ; i++)
   {
      resultado += charToInt((char)s[i]) * potencia ;
      potencia /=b;
   }
   return resultado;
}

int stringToInt(string s) // ok
{
   int len = length(s);
      int resultado = 0;
      int potencia = 1;

      for(int z = 0; z < len-1; z++)
      {
         potencia*=10;
      }

      for(int i = 0; i < len ; i++)
      {
         resultado += charToInt((char)s[i]) * potencia ;
         potencia /=10;
      }
      return resultado;
}

string charToString(char c)
{
   string resultado = "";
   resultado += c;
   return resultado;
}

char stringToChar(string s)
{
   return (char)s[0];
}

string stringToString(string s)
{
   return s;
}

string doubleToString(double d)
{
   int ladoIzquierdo = d;
   double ladoDerecho = d - (int)d;
   string resultado = "";
   if (ladoIzquierdo == 0)
      resultado = "0";
   else {
      while(ladoIzquierdo!=0)
      {
         resultado = intToChar(ladoIzquierdo%10) + resultado;
         ladoIzquierdo = ladoIzquierdo/10;
      }
   }
   resultado += '.';

   int maxDecimales = 6;
      while (ladoDerecho > 0 && maxDecimales--)
      {
          ladoDerecho *= 10;
          int digit = (int)ladoDerecho;
          resultado += intToChar(digit);
          ladoDerecho -= digit;
      }

      return resultado;
}

double stringToDouble(string s)
{
   double entera = 0;
   int i = 0;
   while(s[i]!='.')
   {

      entera *= 10;
      entera += charToInt((char)s[i]);
      i++;
   }
   i++;
   int corrimiento = 1;
   double decimales = 0;
   while(s[i]!='\0')
   {
      corrimiento *= 10;
      decimales = decimales + (double)charToInt((char)s[i])/corrimiento;
      i++;
   }

   return (entera+decimales);
}

bool isEmpty(string s)
{
   return length(s)? 0 : 1;
}

bool startsWith(string s,string x)
{
   int len = length(x);
   for(int i = 0; i < len ; i++)
   {
      if(s[i]!=x[i])
      {
         return false;
      }
   }
   return true;
}

bool endsWith(string s,string x)
{
   int lenS = length(s);
   int lenX = length(x);

   for(int i = 0; i < lenX ; i++)
   {
      if(s[lenS-1-i] != x[lenX -1 -i])
      {
         return false;
      }
   }
   return true;
}

bool contains(string s,char c)
{
   int len = length(s);
   for(int i = 0; i<len ; i++)
   {
      if(s[i]==c)
      {
         return true;
      }
   }
   return false;
}

string replace(string s,char oldChar,char newChar)
{
   int len = length(s);
      for(int i = 0; i<len ; i++)
      {
         if(s[i]==oldChar)
         {
            s[i]=newChar;
         }
      }
      return s;
}

string insertAt(string s,int pos,char c)
{
   string ladoIzquierdo = substring(s,0,pos);
   string ladoDerecho = substring(s,pos);
   return ladoIzquierdo + c + ladoDerecho;
}

string removeAt(string s,int pos)
{
   string ladoIzquierdo = substring(s,0,pos);
   string ladoDerecho = substring(s,pos+1);
   return ladoIzquierdo + ladoDerecho;
}

string ltrim(string s)
{
   int i = 0;
   while(s[i]==' ')
   {
      i++;
   }
   string resultado = substring(s,i);
   return resultado;
}

string rtrim(string s)
{
   int len = length(s);
   cout << len << endl;
   int i = 0;
   while(s[len-i-1] == ' ')
   {
      i++;
   }
   string resultado = substring(s,0,len-i);
   return resultado;
}

string trim(string s)
{
   string resultado = "";
   resultado = ltrim(s);
   resultado = rtrim(resultado);
   return resultado;
}

string replicate(char c,int n)
{
   string resultado = "";
   for(int i = 0; i < n ; i++)
   {
      resultado += c;
   }
   return resultado;
}

string spaces(int n)
{
   string resultado = "";
      for(int i = 0; i < n ; i++)
      {
         resultado += ' ';
      }
      return resultado;
}

string lpad(string s,int n,char c)
{
   int lenS = length(s);
   string relleno = replicate(c,n-lenS);
   return relleno + s;
}

string rpad(string s,int n,char c)
{
   int lenS = length(s);
   string relleno = replicate(c,n-lenS);
   return s + relleno;
}

string cpad(string s,int n,char c)
{
   int lenS = length(s);
   //para lado izquierdo
   int cantRelleno = (n-lenS)/2;
   string izquierda = replicate(c,cantRelleno);

   //para lado derecho
   cantRelleno = (n-lenS) - cantRelleno;
   string derecha = replicate(c,cantRelleno);

   return izquierda + s + derecha ;
}

bool isDigit(char c)
{
   if (c >= '0' && c <= '9') return true;
   return false;
}

bool isLetter(char c)
{
   if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
   {
      return true;
   }
   return false;
}

bool isUpperCase(char c)
{
   if(c >= 'A' && c <= 'Z') return true;
   return false;
}

bool isLowerCase(char c)
{
   if(c >= 'a' && c <= 'z') return true;
   return false;
}

char toUpperCase(char c)
{
   if(c >= '0' && c <= '9') return c;
   if(c >= 'A' && c <= 'Z') return c;
   if(c >= 'a' && c <= 'z') return (c - 32);
   return '?';
}

char toLowerCase(char c)
{
   if(c >= '0' && c <= '9') return c;
   if(c >= 'a' && c <= 'z') return c;
   if(c >= 'A' && c <= 'Z') return (c + 32);
   return '?';
}

string toUpperCase(string s)
{
   int len = length(s);
   for(int i = 0; i<len; i++)
   {
      if(s[i] >= 'a' && s[i] <= 'z')
      {
         s[i] -= 32;
      }
   }
   return s;
}

string toLowerCase(string s)
{
   int len = length(s);
   for(int i = 0; i<len; i++)
   {
      if(s[i] >= 'A' && s[i] <= 'Z')
      {
         s[i] += 32;
      }
   }
   return s;
}

int cmpString(string a,string b)
{
   int i = 0;
   while(a[i]!='\0' && b[i]!='\0' && a[i]==b[i])
   {
      i++;
   }
   return a[i]-b[i];
}

int cmpDouble(double a,double b)
{
   return (int)(a-b);
}

#endif
