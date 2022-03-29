#include <iostream>
#include <string>
#include <fstream>

int main(void)
{
	std::ifstream fin;
	const char * path = "myFile.tx";
	fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);


	try
	{
		std::cout<< "La tentative d'ouvrire le fichier!" << std::endl;
		fin.open(path);
		std::cout<< "L'ouverture du fichier !" << std::endl;

	}
	catch(const std::ifstream::failure& ex) // or std::exception
	{
		std::cerr << ex.what() <<std::endl;
		// std::cerr << ex.code() <<std::endl; //ne marche pas :(
	}
	
	fin.close();

	return (0);
}