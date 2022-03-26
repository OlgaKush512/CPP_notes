#include <iostream>

class A
{
	public:
	A()
	{
		std::cout << "malloc class A" << std::endl;
	}
	virtual ~A() = 0;
};

A::~A(){};

class B : public A
{
	public:
	B()
	{
		std::cout << "malloc class B" << std::endl;
	}
	~B()
	{
		std::cout << "free class B" << std::endl;
	}
};

int main(void)
{
	A *ptrB = new B();

	delete ptrB; 
	return (0);
}