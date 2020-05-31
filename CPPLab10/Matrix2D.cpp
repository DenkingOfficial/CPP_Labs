#include "Matrix2D.h"

int Matrix2D::element(unsigned int x, unsigned int y) const
{
	return cond[x][y];
}

int& Matrix2D::element(unsigned int x, unsigned int y)
{
	return cond[x][y];
}

Matrix2D::Matrix2D() : MatrixBase(size) {
	unsigned int count = 1;
	for (int x = 0; x < size; ++x)
		for (int y = 0; y < size; ++y)
			cond[x][y] = count++;
};