#include <iostream>

class A
{
	public:

		A()
		{
			std::cout << "Constructer class A called" << std::endl;
		}
		
		~A()
		{
			std::cout << "Destructor class A called" << std::endl;
		}
	protected:

	private:
};

class B : public A
{
	public:

		B()
		{
			std::cout << "Constructer class B called" << std::endl;
		}

		~B()
		{
			std::cout << "Destructor class B called" << std::endl;
		}
};

class C : public B
{
	public:

		C()
		{
			std::cout << "Constructer class C called" << std::endl;
		}

		~C()
		{
			std::cout << "Destructor class C called" << std::endl;
		}
};

int main(void)
{
	C	c;

	return (0);
}