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
   return "";
}

double stringToDouble(string s)
{
   return 1.1;
}

bool isEmpty(string s)
{
   return true;
}

bool startsWith(string s,string x)
{
   return true;
}

bool endsWith(string s,string x)
{
   return true;
}

bool contains(string s,char c)
{
   return true;
}

string replace(string s,char oldChar,char newChar)
{
   return "";
}

string insertAt(string s,int pos,char c)
{
   return "";
}

string removeAt(string s,int pos)
{
   return "";
}

string ltrim(string s)
{
   return "";
}

string rtrim(string s)
{
   return "";
}

string trim(string s)
{
   return "";
}

string replicate(char c,int n)
{
   return "";
}

string spaces(int n)
{
   return "";
}

string lpad(string s,int n,char c)
{
   return "";
}

string rpad(string s,int n,char c)
{
   return "";
}

string cpad(string s,int n,char c)
{
   return "";
}

bool isDigit(char c)
{
   return true;
}

bool isLetter(char c)
{
   return true;
}

bool isUpperCase(char c)
{
   return true;
}

bool isLowerCase(char c)
{
   return true;
}

char toUpperCase(char c)
{
   return 'X';
}

char toLowerCase(char c)
{
   return 'X';
}

string toUpperCase(string s)
{
   return "";
}

string toLowerCase(string s)
{
   return "";
}

int cmpString(string a,string b)
{
   return 0;
}

int cmpDouble(double a,double b)
{
   return 0;
}

#endif
