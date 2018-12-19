#include <iostream>
#include "Sales_item.h"

int main()
{
   const int b = 1;
   const int &a = b;
   int c;
   std::cin >> c;
   std::cout << "a=" << a << "b=" << b << "c=" << c <<std::endl;
   return 0;
}