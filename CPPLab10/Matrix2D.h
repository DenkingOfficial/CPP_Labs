#ifndef MATRIX2D_H
#define MATRIX2D_H
#include "MatrixBase.h"

class Matrix2D : public MatrixBase {
public:
	Matrix2D();
	int element(unsigned int x, unsigned int y) const override;
	int& element(unsigned int x, unsigned int y) override;
private:
	static int const size = 2;
	int cond[size][size];
};

#endif
