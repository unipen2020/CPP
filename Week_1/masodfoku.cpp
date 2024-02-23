#include "masodfoku.h"
#include <math.h>

Masodfoku::Masodfoku(int a, int b, int c)
{
   this->a = a ;
   this->b = b ;
   this->c = c ;
}
Masodfoku::Masodfoku(const Masodfoku& m)
{
   this->a = m.a ;
   this->b = m.b ;
   this->c = m.c ;
}
int Masodfoku::D()
{
   return b * b - 4 * a * c ;
}
int Masodfoku::megoldasok()
{
   if (this->D() > 0)
   {
      return 2 ;
   }
   else if (this->D() == 0)
   {
      return 1 ;
   }
   else 
   {
      return 0 ;
   }
}
double Masodfoku::X_1()
{
   return (-this->b + (pow(this->D(),0.5))) / (2 * this->a) ;
}
double Masodfoku::X_2()
{
   return (-this->b - (pow(this->D(),0.5))) / (2 * this->a) ;
}
int Masodfoku::getA()
{
   return this->a ;
}
int Masodfoku::getB()
{
   return this->b ;
}
int Masodfoku::getC()
{
   return this->c ;
}
void Masodfoku::setA(int a)
{
   this->a = a ;
} 
void Masodfoku::setB(int b)
{
   this->b = b ;
} 
void Masodfoku::setC(int c)
{
   this->c = c ;
} 