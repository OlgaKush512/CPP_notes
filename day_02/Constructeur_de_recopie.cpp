#include <iostream>

class MyClass
{
	public:

		int	*data;

		MyClass(int size)
		{
			this->_size = size;
			this->data = new int[size];
			for (int i = 0; i < size; i++)
				data[i] = 0;
			std::cout << "Constructeur called, address :" << this << std::endl;
		}

		MyClass(const MyClass &other)
		{
			this->_size = other._size;
			this->data = new int[other._size];

			for (int i = 0; i < other._size; i++)
				this->data[i] = other.data[i];
			std::cout << "Constructeur de recopie called, address :" << this << std::endl;

		}
		~MyClass(void)
		{
			std::cout << "Destructeur called, address :" << this << std::endl;
			delete [] data;
		}
	private:

	int	_size;

};

void	Foo(MyClass value)
{
	(void)value;
	std::cout << "Fonction Foo called."<< std::endl;
}

MyClass	Foo2(void)
{
	std::cout << "Fonction Foo2 called."<< std::endl;
	MyClass f(2);
	return (f);
}

int main(void)
{
	MyClass a(42);
	MyClass b(a);
	// Foo(mc);
	// Foo2();
	return (0);
}