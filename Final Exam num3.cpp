/*
#include <iostream>
#include <vector>
using namespace std;
class A {
public:
	A() : x(20), y(10) {}
	A(float a, float b) : x(a), y(b) { }
	float x, y;
	float xx() { return x * x + y * y; }
};

int main() {
	vector <A> vv;
	for (float i = 0; i < 3; i++) {
		vv.push_back(A(i + 2, i + 3));
	}
	vv.erase(vv.begin() + 1, vv.begin() + 2);
	for (auto& yy : vv) {
		cout << yy.xx() << endl;
	}
	return 123;
}
*/