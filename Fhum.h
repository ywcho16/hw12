#pragma once
#include "Fani.h"
class human : public animal {
public:
	human() { nArms = 2; };
	int nArms;
	void walk() { std::cout << " I walk \n"; }
};

