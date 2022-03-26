#include <iostream>

class Car
{
	public:

		void Drive()
		{
			std::cout << "I drive! " << std::endl;
		}
};

class Airplane
{
	public:

	void	Fly(void)
	{
		std::cout << "I fly!" << std::endl;
	}
};

class FlyingCar : public Car, public Airplane
{
	public:

	
};


int main(void)
{
	FlyingCar fl;

	fl.Fly();
	return (0);
}