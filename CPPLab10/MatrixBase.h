#ifndef MATRIXBASE_H
#define MATRIXBASE_H
#include <iostream>
#include <stdexcept>
using namespace std;

class MatrixBase
{
public:
	MatrixBase() = delete;
	unsigned int size() const { return mtrx_size; }
	void operator+=(MatrixBase& iAdd);
	void operator*=(int iMult);
	virtual int element(unsigned int x, unsigned int y) const = 0;
	virtual int& element(unsigned int x, unsigned int y) = 0;
	friend ostream& operator<<(ostream& out, const MatrixBase& iMatrix);
protected:
	explicit MatrixBase(unsigned int iSize) : mtrx_size(iSize) {}
private:
	const unsigned int mtrx_size;
};

#endif