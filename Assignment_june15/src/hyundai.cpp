#include "hyundai.h"


Hyundai::Hyundai(std::string model_name, std::string color, double price)
	: Car(model_name), color(color), price(price) {}

double Hyundai::getSpeed() {
	double speed = 200;
	return speed;
}

double Hyundai::getPrice() {
	return price;
}

std::string Hyundai::getLocation() {
	std::string location = "Korea";
	return location;
}

std::string Hyundai::getColor() {
	return color;
}