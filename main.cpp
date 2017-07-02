#include <iostream>
#include <string>
#include "Classes.h"

using namespace std;

int main() {
   AutoData Skoda;
   Skoda.set_date();
   Skoda.get_date();
   Skoda.set_color();
   Skoda.get_color();
   Skoda.set_wheels();
   Skoda.get_wheels();
   Skoda.set_doors();
   Skoda.get_doors();
   Skoda.data();


   cin.get();
   return 0;
}
