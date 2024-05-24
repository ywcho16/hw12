#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private
}
float Engineer::getspeed(Car* yy) {
	return yy->speed;
}
int Engineer::getCarWheel(Car* zz) {
	return zz->wheels;
}