#pragma once
//#include <string>
//#include<iostream>
//
//
//class Hyundai {
//
//private:
//	std::string color = "orange";
//	double price = 8;
//
//public:
//	Hyundai(std::string color, double price);
//	double getSpeed();
//	double getPrice();
//	std::string getLocation();
//	std::string getColor();
//};





#include <string>
#include<iostream>
#include "car.h"


class Hyundai : public Car {

private:
	std::string color = "orange";
	double price = 8;

public:
	Hyundai(std::string model_name, std::string color, double price);
	double getSpeed();
	double getPrice();
	std::string getLocation();
	std::string getColor();
};

