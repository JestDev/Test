#include <iostream>
#include <string>

using namespace std;

class Auto {
private:
   int year;
   int month;
   int day;
public:
   void set (int date_year, int date_month, int date_day) {
      year = date_year;
      month = date_month;
      day = date_day;
   }
   void get () {
      cout << "This car made on " << year << "." << month << "." << day << endl;
   }
};

int main() {
   Auto Lada;
   Lada.set(2003, 5, 18);
   Lada.get();
   
   Auto Shkoda;
   Shkoda.set(2010, 3, 16);
   Shkoda.get();
   
   cin.get();
   return 0;
}
