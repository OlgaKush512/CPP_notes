#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void Foo(int value)
{
	if (value < 0)
		// throw exception();
		// throw value;
		throw "Le numero est moins de 0!!!";
	if (value == 0)
		throw exception();
	if (value == 1)
		throw 1;
	std::cout << " Value = " << value << std::endl;
}
int main(void)
{
	try
	{
		Foo(1);
	}
	catch (const std::exception & ex) // doit correspondre le type des donnes de retour catch
	{
		// std::cerr << ex.what() << std::endl;
		std::cout<< "Erreur!" << ex.what() <<std::endl;
	}
	catch (char const* ex) // doit correspondre le type des donnes de retour catch
	{
		// std::cerr << ex.what() << std::endl;
		std::cout<< "Erreur!" << ex <<std::endl;
	}
	catch(...) // utiliser juste a la fin!!!
	{
		std::cout<< "Erreur!111"<<std::endl;
	}
	return (0);
}