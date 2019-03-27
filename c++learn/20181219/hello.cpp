#include <iostream>
#include "Sales_item.h"
using namespace std;

class lbc{
   public:
   lbc(double l = 1, double b = 2, double c = 3){
      height = l;
      width = b;
      length = c;
   }

   private:
   double height;
   double width;
   double length;
};

int main(){
   lbc LBC(4,5,6);
   //lbc LBC;
   //LBC(4,5,6);
   return 0;
}