#include <iostream>
#include <string>


class Human
{
	public:

		Human(std::string Name)
		{
			this->Name = Name;
			this->Age = 0;
			this->Weight = 0;
		}

		Human(std::string Name, int Age) : Human(Name)
		{
			this->Age = Age;
		}

		Human(std::string Name, int Age, int Weight) : Human(Name,Age)
		{
			this->Weight = Weight;
		}
		std::string Name;
		int		Age;
		int		Weight;
};

int main(void)
{
	Human A("Boris", 30, 70);
	return (0);
}