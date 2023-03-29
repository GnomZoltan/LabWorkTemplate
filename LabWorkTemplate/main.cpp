#include <iostream>
#include "points.h"
#include <iomanip>

CPoint<int> read_point();

int main()
{
	CPoint<int> A = read_point();
	CPoint<int> B = read_point();
	CPoint<int> C = read_point();

	std::cout << " A = " << A << '\n' << " B = " << B << '\n' << " C = " << C << '\n';
	//int P = A.distance(B) + B.distance(C) + C.distance(A);
	//double p = P * 0.5;
	int a = A.distance(B);
	int b = B.distance(C);
	int c = C.distance(A);
	int P = a + b + c;
	double p = P * 0.5;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << "P  = " << P << " S = " << S << '\n';
	return 0;
}

CPoint<int> read_point()
{
	std::cout << "Input 2 integers: ";
	int x, y;
	std::cin >> x >> y;
	return CPoint<int>(x, y);
}