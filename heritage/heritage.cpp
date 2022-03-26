#include <iostream>

class Human
{
	public:

	std::string getName(void)
	{
		return (_name);
	}
	void setName(std::string name)
	{
		this->_name = name;
	}

	private:

		std::string _name;
};

class Student : public Human
{
	public:

	std::string group;

	void learn(void)
	{
		std::cout << "Я учусь!" << std::endl;
	}
};

class ExtramuralStudent : public Student
{
	public:

	std::string group;

	void learn(void)
	{
		std::cout << "Я учусь реже обычного студента!" << std::endl;
	}
};

class Professor : public Human
{
	public:

	std::string subject;
};


int main(void)
{
	Student st;
	ExtramuralStudent est;

	st.learn();
	est.learn();
	st.setName("Аристарх");
	est.setName("Мавродий");
	std::cout << st.getName() << std::endl;
	std::cout << est.getName() << std::endl;
	return (0);
}