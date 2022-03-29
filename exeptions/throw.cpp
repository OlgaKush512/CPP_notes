#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void Foo(int value)
{
	if (value < 0)
		throw exception();
		// throw value;
		// throw "Le numero est moins de 0!!!";
	std::cout << " Value = " << value << std::endl;
}
int main(void)
{
	try
	{
		Foo(-55);
	}
	catch (const std::exception & ex) // doit correspondre le type des donnes de retour catch
	{
		// std::cerr << ex.what() << std::endl;
		std::cout<< "Erreur!" << ex.what() <<std::endl;
	}
	return (0);
}