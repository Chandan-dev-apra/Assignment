#pragma once
//#include <string>
//#include<iostream>
//
//
//class maruti {
//
//private:
//	std::string color="red";
//	double price=12;
//
//public:
//	maruti(std::string color, double price);
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



class Maruti :public Car {

private:
	std::string color = "red";
	double price = 12;

public:
	Maruti(std::string model_name, std::string color, double price);
	double getSpeed();
	double getPrice();
	std::string getLocation();
	std::string getColor();


};