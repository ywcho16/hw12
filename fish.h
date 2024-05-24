#pragma once
#include "ani.h"
class fish : public animal {
public:
	fish() { nfin = 3; };
	int nfin;
	void swim() { std::cout << " I swim \n"; }
};