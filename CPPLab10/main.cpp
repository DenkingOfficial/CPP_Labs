#include <iostream>
#include "Matrix2D.h"
#include "Matrix3D.h"
using namespace std;

int main()
{
	Matrix2D m2a, m2b;
	Matrix3D m3a, m3b;

	cout << m2a << endl;
	cout << m2b << endl;
	m2a += m2b;
	cout << m2a << endl;

	cout << m3a << endl;
	cout << m3b << endl;
	m3a*=5;
	cout << m3a << endl;

	return 0;
}