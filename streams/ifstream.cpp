#include <iostream>
#include <string>
#include <fstream>

int main(void)
{
	// fstream - основной класс, содержит в себе как функционал по записи файлов, так и по их чтению
	// ifsream - чтение
	// ofstream - запись - сохранение в файл

	std::ifstream fin;
	std::string path = "myFile.txt";
	fin.open(path);

	if (!fin.is_open())
		std::cout<< "Erreur d'ouverture du fichier!" << std::endl;
	else
	{
		std::cout << "Le fichier est ouvert!" << std::endl;
		// char ch;
		std::string str;

		// while (fin.get(ch)) // par char
		// 	std::cout << ch << std::endl;
		while (!fin.eof())// par char
		{
			str = "";
			std::getline(fin, str);
			// fin >> str; // lis les donnees jusqu'au le 1er espace
			std::cout << str << std::endl;
		}
	}
	fin.close();
	return (0);
}