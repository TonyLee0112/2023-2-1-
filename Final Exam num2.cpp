/*
#include <iostream>
#include<vector>
using namespace std;

class A {
	static int I;
public:
	int ii, j;
	A() : ii(20), j(I++) {
		cout << j << " A is born.\n";
	}
	A(int a) : ii(a), j(I++) {
		cout << j << " A is created.\n";
	}
	~A() { cout << j << " A is gone.\n"; }
};
int A::I = 0;
class B {
public:
	int jj;
	B() : jj(20) {
		cout << " B is born.\n";
	}
	B(int a) : jj(a) {
		cout << " B is created.\n";
	}
	~B() { cout << " B is gone.\n"; }
};
void any() { A x; }
void main() {
	A aa[2];
	aa[1] = A(200);
	for (A x; x.ii < 23; x.ii++) { B b(x.ii); }
	any();
}
*/