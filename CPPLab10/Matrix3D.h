#ifndef MATRIX3D_H
#define MATRIX3D_H
#include "MatrixBase.h"

class Matrix3D : public MatrixBase {
public:
	Matrix3D();
	int element(unsigned int x, unsigned int y) const override;
	int& element(unsigned int x, unsigned int y) override;
private:
	static int const size = 3;
	int cond[size][size];
};

#endif // !MATRIX3D_H
