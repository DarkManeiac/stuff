// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int multiplication(int a, int b)
{
	int r;
	r = a * b;
	return r;
}

int main()
{
	int z;
	z = multiplication(4, 3);
	cout << "Rezult is: " << z << endl;
	system("pause");
    return 0;
}

