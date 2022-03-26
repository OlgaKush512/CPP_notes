#include <iostream>

class Gun
{
	public:

		virtual void Shoot()
		{
			std::cout << "BANG!!!" << std::endl;
		}
};

class SubmashineGun : public Gun
{
	public:

		void Shoot()
		{
			std::cout << "BANG!!! BANG!!! BANG!!!" << std::endl;
		}
};

class Player
{
	public:

		void Shoot(Gun *gun)
		{
			gun->Shoot();
		}
};

int main(void)
{
	SubmashineGun	subGun;
	// Gun				gun;
	Player			player;

	// Gun			*gunPtr = &gun;
	// Gun			*gunPtr1 = &subGun;

	player.Shoot(&subGun);


	// subGun.Shoot();
	// gunPtr->Shoot();
	// gunPtr1->Shoot();
	return (0);
}