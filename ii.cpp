#include <iostream>
using namespace std;
class A {
public:
	A() : ii(10) {};
	A(int x) :ii(x) {};
	int ii;
};
class B : public A {
public:
	B() : A(8) { A(88); bbb = ii + 5; ccc = ii * 10; };
	// A(88) no variable name
	B(int x) : A() { bbb = x; ccc = ii * 10; };
	int bbb;
	int ccc;
};
void main() {
	B e, f(22);
	cout << e.bbb << endl;
	cout << f.bbb << endl;
	cout << f.ii << endl;
	cout << f.ccc << endl;
}
