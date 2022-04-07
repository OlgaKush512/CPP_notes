# include <iostream>
#include <string>


int main(void)
{
	double a = 33.33;

	int b = (int)a;
	int g = a;
	double f = b;


	std::cout << a << std::endl;
	std::cout << g << std::endl;
	std::cout << (char)a << std::endl;
	std::cout << b << std::endl;
	std::cout << f << std::endl;


	return (0);
}