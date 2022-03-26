#include <iostream>

class Weapon
{
	public:

		virtual void Shoot() = 0;
};


class Gun : public Weapon
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

class Bazouka : public Weapon
{
	public:

		void Shoot()
		{
			std::cout << "BADABOUM!!!" << std::endl;
		}
};

class Knife : public Weapon
{
	public:

		void Shoot()
		{
			std::cout << "VJUH!!!" << std::endl;
		}
};

class Player
{
	public:

		void Shoot(Weapon *gun)
		{
			gun->Shoot();
		}
};

int main(void)
{
	SubmashineGun	subGun;
	Gun				gun;
	Bazouka			bazouka;
	Player			player;

	Gun			*gunPtr = &gun;
	Gun			*gunPtr1 = &subGun;
	Bazouka		*bazou = &bazouka;

	player.Shoot(gunPtr);
	player.Shoot(gunPtr1);
	player.Shoot(bazou);
	// subGun.Shoot();
	// gunPtr->Shoot();
	// gunPtr1->Shoot();
	return (0);
}