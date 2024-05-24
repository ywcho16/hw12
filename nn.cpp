#include <iostream>
using namespace std;

class mm {
public:
    mm() { a = 4 + 300; cout << "mm\n"; }
    mm(int b) { a = b + 100; cout << "mmb\n"; }
    int a;
};

class nn : public mm {
public:
    nn() { a = 11; cout << "nn\n"; }
    nn(int b) { c = a; a = b; mm::mm(a); cout << "nnb\n"; }
    int c;
};

class oo : public nn {
public:
    oo() : nn(20) { cout << "oo\n"; }
};

int main() {
    oo qq;
    cout << qq.a << endl;
    cout << qq.c << endl;
    return 123;
}
