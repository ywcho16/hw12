#include "Motor.h"
#include <iostream>
void Motor::setSparewheels(int ii) {
	spareWheels = ii;
}
int Motor::getSparewheels() {
	return spareWheels;
};
void Motor::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "BagaBaga\n";
	}
}