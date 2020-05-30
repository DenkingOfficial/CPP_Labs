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
	short id = 1;
	string model = "Lamborgini";
	int year = 2011;
	auto car = info(id, model, year);
	cout << "ID: " << car.id << ", Model: " << car.model << ", Year: " << car.year << endl;
	return 0;
}