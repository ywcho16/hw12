#include <iostream>
using namespace std;
class Person {
public:
	Person(int x):PD(1) {
		cout << "Person::Person(int ) called" << endl;
		cout << PD << endl;
	}
	int PD;
	Person() { cout << "Person::person() called" << endl; cout << PD << endl;
	}
	
};
class Faculty : virtual public Person {
public:
	Faculty(int x) :Person(x) {
		FD = 2;
		cout << "Faculty::Fculty(int ) called" << endl;
		cout << FD << endl;
	}
	int FD;
};
class Student : virtual public Person {
public: 
	Student(int x) :Person(x) {
		SD = 3;
		cout << "Student::Student(int ) called" << endl;
		cout << SD << endl;
	}
	int SD;
};
class TA : public Faculty, public Student {
public:
	TA(int x) :Student(x), Faculty(x) {
		cout << "TA::TA(int ) called" << endl;
		cout << PD << FD << SD << endl;
	}
};

int main() {
	TA tal(30);
}