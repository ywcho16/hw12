#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	void klaxon(int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);

	friend class Engineer;
protected:
	void speedUp(float);
	void speedDown(float);
	int wheels;
	int getWheels();
	void setWheels(int);
private:
	float price;
};
