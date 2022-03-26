#include <iostream>
#include <string>


class IBicicle
{
	public:

		virtual void EwistTheWhee(void) = 0;
		virtual void Ride(void) = 0;
};

class Human
{
	public:

		void RideOn(IBicicle &b)
		{
			std::cout << "Kroutim Roul!" << std::endl;
			b.EwistTheWhee();
			std::cout << "Poehali!" << std::endl;
			b.Ride();
		}
};

class SimpleBicicle : public IBicicle
{
	public:

		void EwistTheWhee(void)
		{
			std::cout << "EwistTheWhee()" << std::endl;
		}
		void Ride(void)
		{
			std::cout << "Ride()" << std::endl;
		}
};


int main(void)
{
	Human A;
	SimpleBicicle sb;

	A.RideOn(sb);
	return (0);
}