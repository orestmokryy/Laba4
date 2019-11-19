#include "Printer.h"
#include <iostream>

int main() {
	cout << "type1 printer\n";
	Printer type1("Lviv,Ukraine", 23912, 100, "Epson", "Black and White");
	type1.price = 2200;
	type1.name = "AR-15";
	type1.outputFields();
	cout << "\n\n";

	cout << "type2 printer\n";
	Printer type2("Orgrimmar, Kalimdor", 41205, 120, "Agros", "Black and White");
	type2.price = 1700;
	type2.name = "M-61A-1S";
	type2.outputFields();
	cout << "\n\n";

	cout << "type3 printer\n";
	Printer type3("Ironforge, Eastern kingoms", 12323, 95, "HP", "Colorful");
	type3.price = 2000;
	type3.name = "Five/Seven";
	type3.outputFields();
}