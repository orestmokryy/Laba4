#pragma once
#include <string>
#include <iostream>

using namespace std;

class Printer
{
public:
	void outputFields();

	
	int getspeed();
	string getproduction();
	string getcolor();

	int price;
	string name;

	Printer();

	Printer(string production_adress, int serial_num, int speed, string production, string color);

	~Printer();

protected:
	string production_adress;
	int serial_num;

private:
	int speed;
	string production;
	string color;
};