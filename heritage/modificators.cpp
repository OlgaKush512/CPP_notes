#include <iostream>

class One
{
	public:

		One()
		{
			this->msgOne = "Message One";
			this->msgTwo = "Message Two";
			this->msgThree = "Message Three";
		}
		std::string	msgOne;
	protected:

		std::string	msgTwo;
	private:
		std::string	msgThree;
};

class Two : public One
{
	public:

	void	printMsg(void)
	{
		std::cout << this->msgThree << std::endl;
	}
};


int main(void)
{
	Two tho;

	tho.printMsg();
	return (0);
}