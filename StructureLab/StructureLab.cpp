#include <iostream>
#include <string>

using namespace std;

struct Car
{
	short id;
	string model;
	int year;
};

Car info(short sh, string str, int num)
{
	Car car = { sh, str, num };
	return car;
}

int main()
{

}