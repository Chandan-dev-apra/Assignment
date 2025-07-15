//#include "tata.h"
//
//
//Tata::Tata(std::string color, double price) {
//	this->color=color;
//	this->price=price;
//}
//
//double Tata::getSpeed() {
//	double speed = 100;
//	return speed;
//}
//
//double Tata::getPrice() {
//	return price;
//}
//
//std::string Tata::getLocation() {
//	std::string location = "India";
//	return location;
//}
//
//std::string Tata::getColor() {
//	return color;
//}



#include "tata.h"


Tata::Tata(std::string model_name, std::string color, double price)
	: Car(model_name), color(color), price(price) {}

double Tata::getSpeed() {
	double speed = 100;
	return speed;
}

double Tata::getPrice() {
	return price;
}

std::string Tata::getLocation() {
	std::string location = "India";
	return location;
}

std::string Tata::getColor() {
	return color;
}