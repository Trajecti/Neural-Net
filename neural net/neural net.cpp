// neural net.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv)
{
	int x;
	mat A = randu<mat>(4, 5);
	mat B = randu<mat>(4, 5);

	cout << A*B.t() << endl;
	cin >> x;

	return 0;
}