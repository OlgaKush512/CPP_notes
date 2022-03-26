#include <iostream>
#include <string>


class Msg
{
	public:

		Msg(std::string msg)
		{
			this->_msg = msg;
		}

		virtual std::string getMsg(void)
		{
			return(this->_msg);
		}

	private:

		std::string _msg;
};

class BracketsMsg : Msg
{
	public:

		BracketsMsg(std::string msg) : Msg(msg)
		{
		}

		std::string getMsg(void)
		{
			return("[" + ::Msg::getMsg() + "]");
		}

};

class Printer
{
	public:

		void Print(Msg *msg)
		{
			std::cout << msg->getMsg() << std::endl;
		}
};

int main(void)
{
	Msg A("Boris");

	Printer p;

	p.Print(&A);
	return (0);
}