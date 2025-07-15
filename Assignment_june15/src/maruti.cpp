//#include "maruti.h"
//
//
//maruti::maruti(std::string color, double price) {
//	this->color=color;
//	this->price=price;
//}
//
//double maruti::getSpeed() {
//	double speed = 100;
//	return speed;
//}
//
//double maruti::getPrice() {
//	return price;
//}
//
//std::string maruti::getLocation() {
//	std::string location = "India";
//	return location;
//}
//
//std::string maruti::getColor() {
//	return color;
//}



#include "maruti.h"


Maruti::Maruti(std::string model_name, std::string color, double price)
	: Car(model_name), color(color), price(price) {}

double Maruti::getSpeed() {
	double speed = 100;
	return speed;
}

double Maruti::getPrice() {
	return price;
}

std::string Maruti::getLocation() {
	std::string location = "India";
	return location;
}

std::string Maruti::getColor() {
	return color;
}