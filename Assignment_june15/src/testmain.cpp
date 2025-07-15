#include "tata.h"
#include "hyundai.h"
#include "maruti.h"



int main() {

 
	if (true) {

		std::cout << "-----Tata------" << std::endl;
		if (true) {
			std::cout << "-----Tata using heap allocation------" << std::endl;
			Car* mycar = new Tata("tiago","yellow", 3);


			std::cout << " Price :" << mycar->getPrice() << std::endl;
			std::cout << "Location :" << mycar->getLocation() << std::endl;
			std::cout << "Color :" << mycar->getColor() << std::endl;
			std::cout << "Speed :" << mycar->getSpeed() << std::endl;

			delete mycar;
		}



		if (true) {
			std::cout << "-----Tata using Reference------" << std::endl;
			Tata c1("tiago", "yellow", 3);
			Car& mycar = c1;

			std::cout << " Price :" << mycar.getPrice() << std::endl;
			std::cout << "Location :" << mycar.getLocation() << std::endl;
			std::cout << "Color :" << mycar.getColor() << std::endl;
			std::cout << "Speed :" << mycar.getSpeed() << std::endl;
		}

		if (true) {
			std::cout << "-----Tata using Shared pointer------" << std::endl;

			std::shared_ptr<Car> mycar = std::make_shared<Tata>("tiago", "yellow", 3);
		 

			std::cout << " Price :" << mycar->getPrice() << std::endl;
			std::cout << "Location :" << mycar->getLocation() << std::endl;
			std::cout << "Color :" << mycar->getColor() << std::endl;
			std::cout << "Speed :" << mycar->getSpeed() << std::endl;

		}



		
	}



	if (true) {

		std::cout << "-----Hyundai------" << std::endl;
		if (true) {
			std::cout << "-----Hyundai using heap allocation------" << std::endl;
			Car* mycar = new Hyundai("i20", "pink", 5);


			std::cout << " Price :" << mycar->getPrice() << std::endl;
			std::cout << "Location :" << mycar->getLocation() << std::endl;
			std::cout << "Color :" << mycar->getColor() << std::endl;
			std::cout << "Speed :" << mycar->getSpeed() << std::endl;

			delete mycar;
		}



		if (true) {
			std::cout << "-----Hyundai using Reference------" << std::endl;
			Hyundai c1("i20", "pink", 5);
			Car& mycar = c1;

			std::cout << " Price :" << mycar.getPrice() << std::endl;
			std::cout << "Location :" << mycar.getLocation() << std::endl;
			std::cout << "Color :" << mycar.getColor() << std::endl;
			std::cout << "Speed :" << mycar.getSpeed() << std::endl;
		}

		if (true) {
			std::cout << "-----Tata using Shared pointer------" << std::endl;

			std::shared_ptr<Car> mycar = std::make_shared<Hyundai>("i20", "pink", 5);


			std::cout << " Price :" << mycar->getPrice() << std::endl;
			std::cout << "Location :" << mycar->getLocation() << std::endl;
			std::cout << "Color :" << mycar->getColor() << std::endl;
			std::cout << "Speed :" << mycar->getSpeed() << std::endl;

		}




	}



	if (true) {

		std::cout << "-----Hyundai------" << std::endl;
		if (true) {
			std::cout << "-----Hyundai using heap allocation------" << std::endl;
			Car* mycar = new  Maruti("dezire", "yellow", 6);


			std::cout << " Price :" << mycar->getPrice() << std::endl;
			std::cout << "Location :" << mycar->getLocation() << std::endl;
			std::cout << "Color :" << mycar->getColor() << std::endl;
			std::cout << "Speed :" << mycar->getSpeed() << std::endl;

			delete mycar;
		}



		if (true) {
			std::cout << "-----Hyundai using Reference------" << std::endl;
		    Maruti c1("dezire", "yellow", 6);
			Car& mycar = c1;

			std::cout << " Price :" << mycar.getPrice() << std::endl;
			std::cout << "Location :" << mycar.getLocation() << std::endl;
			std::cout << "Color :" << mycar.getColor() << std::endl;
			std::cout << "Speed :" << mycar.getSpeed() << std::endl;
		}

		if (true) {
			std::cout << "-----Tata using Shared pointer------" << std::endl;

			std::shared_ptr<Car> mycar = std::make_shared<Maruti>("dezire", "yellow", 6);


			std::cout << " Price :" << mycar->getPrice() << std::endl;
			std::cout << "Location :" << mycar->getLocation() << std::endl;
			std::cout << "Color :" << mycar->getColor() << std::endl;
			std::cout << "Speed :" << mycar->getSpeed() << std::endl;

		}




	}

	
	 

	return 0;

}