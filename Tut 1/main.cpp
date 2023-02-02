#include "A.hpp"
#include <iostream>
using namespace std;

int main() {
	A a1('1');
	A a2 ('2');
	A a3(a1);
	a3 = a2;
	a2.show();
	
	return 0;
}
