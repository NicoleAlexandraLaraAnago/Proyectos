#include <iostream>

using namespace std;

class Fecha{
	public: 
		Fecha();
		Fecha(int day,int month,int year);
		Fecha ingresarFechaNacimiento();
		int _edad();
		void setYear(int);
		void setMonth(int);
		void setDay(int);
		int getYear();
		int getMonth();
		int getDay();

	
	private:
		int year;
		int month;
		int day;
};

