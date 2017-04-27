// DoDO.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>

double hype(double s1_, double s2_);

int main()
{
	double retHyp = hype(3, 4);
	std::cout << retHyp << std::endl;

	system("pause");
    return 0;
}
double hype(double s1_, double s2_)
{
	double hype = sqrt(s1_ * s1_ + s2_ * s2_);
	return hype;
}