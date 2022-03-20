#include <iostream>
#include <string>
#include <fstream>

int main(void)
{
	// fstream - основной класс, содержит в себе как функционал по записи файлов, так и по их чтению
	// ifsream - чтение
	// ofstream - запись - сохранение в файл

	std::ofstream fout;
	std::string path = "myFile.txt";
	fout.open(path, std::ofstream::app);

	if (!fout.is_open())
		std::cout<< "Erreur d'ouverture du fichier!" << std::endl;
	else
	{
		std::cout << "Entrez le nombre: " << std::endl;
		int a;
		std::cin >> a;
		fout << a;
	}
	fout.close();
	return (0);
}