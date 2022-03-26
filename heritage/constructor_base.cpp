#include <iostream>

class A
{
	public:

		A()
		{
			this->msg = "Message One";
			std::cout << "Constructer class A called" << std::endl;
		}
		
		~A()
		{
			std::cout << "Destructor class A called" << std::endl;
		}
		A(std::string msg)
		{
			this->msg = msg;
			std::cout << "Constructer class A called" << std::endl;
		}

		void	printMsg(void)
	{
		std::cout << this->msg << std::endl;
	}
	protected:

	private:

		std::string	msg;
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

int main(void)
{
	B	b;

	b.printMsg();
	return (0);
}