#pragma once
 #include <string>
#include<iostream>


class Car {

protected:
	std::string model_name;
	 

public:
	Car(std::string model_name) : model_name(model_name) {}
	virtual double getSpeed() = 0;;
	virtual double getPrice()=0;
	virtual std::string getLocation()=0;
	virtual std::string getColor()=0;

	virtual ~Car() = default;
};