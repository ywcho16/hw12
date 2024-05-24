#include <iostream>
#include "Fani.h"
#include "Fhum.h"
#include "Fbird.h"
#include "Ffish.h"
using namespace std;

int main() {
    animal a;
    human b;
    bird c;
    fish d;
    a.eat();
    b.eat();
    c.eat();
    b.walk();
    c.fly();
    d.swim();
    cout << " b " << b.nLegs << "\n";
    return 123;
}
