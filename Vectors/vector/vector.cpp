// vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> my_vector;
	my_vector.push_back(10);
	my_vector.push_back(20);

	cout << "The size of My Vector is: " << my_vector.size() << endl;

	my_vector.push_back(30);
	my_vector.push_back(40);

	cout << "The size of My Vector is; " << my_vector.size() << endl;

	for (int i = 0; i < my_vector.size(); i++) {
		cout << "Vector " << i << "   " << my_vector[i] << endl;
	}
	system("pause");
    return 0;
}

