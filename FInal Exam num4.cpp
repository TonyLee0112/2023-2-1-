/*
#include <iostream>
using namespace std;
class A {
public:
	A() : ii(123) { };
	int ii;
	void aa() { cout << " aa\n"; }
	virtual void bb() { cout << " vbb\n"; }
};

class AA : public A {
public:
	AA() {};
	void aa() { cout << " caa\n"; }
	void bb() { cout << " cbb\n"; }
};

void main() {
	A* xx[3];
	for (int i = 0; i < 2; i++) { xx[i] = new AA();}
	xx[2] = new A();
	((AA*)(xx[0]))->aa();
	for (int i = 0; i < 3; i++) { xx[i]->aa(); xx[i]->bb(); }

}
*/