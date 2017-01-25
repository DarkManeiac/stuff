#include "stdafx.h"
#include <iostream>

using namespace std;

int multiplication(int a, int b) {
	int r;
	r = a * b;
	return r;
}

int main() {
	int z;
	z = multiplication(4, 3);
	cout << "Result is: " << z << endl;
	system("pause");
  return 0;
}

