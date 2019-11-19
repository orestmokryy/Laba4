#include "Printer.h"

void Printer::outputFields()
{

	cout << "Speed: " << speed << "\n Production company: " << production << "\n Color: " << color << "\n Production adress: " << production_adress << "\n Serial number: " << serial_num << "\n price: " << price << "\n Name: " << name << endl;

}

int Printer::getspeed()
{
	cout << "Speed:" << speed <<"pages per second"<< endl;
	return speed;
}

string Printer::getproduction()
{
	cout << "Production country :" << production << endl;
	return production;
}

string Printer::getcolor()
{
	cout << "color :" << color << endl;
	return color;
}

Printer::Printer()
{
}

Printer::Printer(string value_production_adress, int value_serial_num, int value_speed, string value_production, string value_color)
{

	production_adress = value_production_adress;
	serial_num = value_serial_num;
	speed = value_speed;
	production = value_production;
	color = value_color;
}

Printer::~Printer()
{
}