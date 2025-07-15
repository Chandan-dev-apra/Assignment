#pragma once
//#include <string>
//#include<iostream>
//
//
//class Tata {
//
//private:
//	std::string color="red";
//	double price=12;
//
//public:
//	Tata(std::string color, double price);
//	double getSpeed();
//	double getPrice();
//	std::string getLocation();
//	std::string getColor();
//
//
//};



#include <string>
#include<iostream>
#include "car.h"



class Tata :public Car{

private:
	std::string color = "red";
	double price = 12;

public:
	Tata(std::string model_name, std::string color, double price);
	double getSpeed();
	double getPrice();
	std::string getLocation();
	std::string getColor();


};