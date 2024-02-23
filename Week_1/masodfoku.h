class Masodfoku
{
   private:
      int  a ;
      int  b ;
      int  c ;
   public:
      Masodfoku(int a, int b, int c)   ;
      Masodfoku(const Masodfoku& m)    ; 
   private:
      int D()                          ;
   public:
      int megoldasok()                 ;
      double X_1()                     ;
      double X_2()                     ;
      int getA()                       ;
      int getB()                       ;
      int getC()                       ;
      void setA(int a)                 ;
      void setB(int b)                 ;
      void setC(int c)                 ;            
}
;