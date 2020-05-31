#include "MatrixBase.h"
#include <string>
#include <cassert>

void MatrixBase::operator*=(int iMult)
{
	for (int x = 0; x < mtrx_size; ++x)
		for (int y = 0; y < mtrx_size; ++y)
			element(x, y) *= iMult;
}

void MatrixBase::operator+=(MatrixBase& iAdd)
{
	for (int x = 0; x < iAdd.mtrx_size; ++x)
		for (int y = 0; y < iAdd.mtrx_size; ++y)
			element(x, y) += iAdd.element(x, y);
}

std::ostream& operator<<(std::ostream& out, const MatrixBase& iMatrix)
{
	for (int x = 0; x < iMatrix.size(); x++)
	{
		for (int y = 0; y < iMatrix.size(); y++)
			out << iMatrix.element(x, y) << ' ';
		out << std::endl;
	}
	return out;
}