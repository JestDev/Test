#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Auto {
protected:
    int year;
    int month;
    int day;
    string color;
    int wheels;
    int doors;
public:
    int date_year;
    int date_month;
    int date_day;

    void set_date () {
        cout << "Year: ";
        cin >> date_year;
        cout << endl;

        cout << "Month: ";
        cin >> date_month;
        cout << endl;

        cout << "Day: ";
        cin >> date_day;
        cout << endl;
    }

    void get_date () {
        year = date_year;
        month = date_month;
        day = date_day;
    }
};

class AutoData : public Auto {
public:
    string c_color;
    int w_wheels;
    int d_doors;

    void set_color () {
        cout << "Color of your car: ";
        cin >> c_color;
        cout << endl;
    }

    void get_color () {
        color = c_color;
    }

    void set_wheels () {
        cout << "Number of wheels in your car: ";
        cin >> w_wheels;
        cout << endl;
    }

    void get_wheels () {
        wheels = w_wheels;
    }

    void set_doors () {
        cout << "Number of doors in your car: ";
        cin >> d_doors;
        cout << endl;
    }

    void get_doors () {
        doors = d_doors;
    }

    void data () {
        cout << "Some info about your car:" << endl;
        cout << "This car made on " << year << "." << month << "." << day << endl;
        cout << "Color: " << color << endl;
        cout << "Number of wheels: " << wheels << endl;
        cout << "Number of doors: " << doors << endl;
    }
};


#endif // CLASSES_H_INCLUDED
