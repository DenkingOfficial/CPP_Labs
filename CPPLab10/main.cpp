#include <iostream>
#include "Matrix2D.h"
#include "Matrix3D.h"

int main()
{
	Matrix2D m2a, m2b;
	Matrix3D m3a, m3b;

	std::cout << "m2a:" << std::endl << m2a << std::endl;
	std::cout << "m2b:" << std::endl << m2b << std::endl;
	m2a += m2b;
	std::cout << "m2a + m2b:" << std::endl << m2a << std::endl;

	std::cout << "m3a:" << std::endl << m3a << std::endl;
	std::cout << "m3b:" << std::endl << m3b << std::endl;
	m3a*=5;
	std::cout << "m3a * 5:" << std::endl << m3a << std::endl;

	return 0;
}