#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
	// fstream - основной класс, содержит в себе как функционал по записи файлов, так и по их чтению
	// ifsream - чтение
	// ofstream - запись - сохранение в файл

	std::fstream fs;
	std::string path = "myFile.txt";
	fs.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
	if (!fs.is_open())
		std::cout<< "Erreur d'ouverture du fichier!" << std::endl;
	else
	{
		std::cout << "Le fichier est ouvert!" << std::endl;
		std::string str;
		int value;
		std::cout << "Entre 1 pour ecrire un nouveau message! " << std::endl;
		std::cout << "Entre 2 pour afficher tous les messages! " << std::endl;
		std::cout << "Entre 3 pour terminer! " << std::endl;
		std::cin >> value;
		if (value == 1)
		{
			std::cout << "Введите Ваше сообщение!" << std::endl;
			std::cin >> str;
			fs << str << std::endl;
		}
		if (value == 2)
		{
			while (!fs.eof())
			{
				str = "";
				fs >> str;
				std::cout << str << std::endl;
			}
		}
	}
	fs.close();
	return (0);
}