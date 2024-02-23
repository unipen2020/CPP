#include <iostream>
#include "masodfoku.h"

using namespace std ;

int main()
{
   Masodfoku m(1,-3,2) ;
   if (m.megoldasok() == 2)
   {
      cout << "Megoldasok szama:2\n"   ;
      cout << "x1:" << m.X_1() << "\n" ;
      cout << "x2:" << m.X_2() << "\n" ;      
   }
   else if (m.megoldasok() == 1)
   {
      cout << "Megoldasok szama:1\n"   ;
      cout << "x1:" << m.X_1() << "\n" ;
   }
   else 
   {
      cout << "Megoldasok szama:0\n"   ;  
   }
   m.setA(1) ;
   m.setB(2) ;
   m.setC(3) ;
   if (m.megoldasok() == 2)
   {
      cout << "Megoldasok szama:2\n"   ;
      cout << "x1:" << m.X_1() << "\n" ;
      cout << "x2:" << m.X_2() << "\n" ;      
   }
   else if (m.megoldasok() == 1)
   {
      cout << "Megoldasok szama:1\n"   ;
      cout << "x1:" << m.X_1() << "\n" ;
   }
   else 
   {
      cout << "Megoldasok szama:0\n"   ;  
   }   
}