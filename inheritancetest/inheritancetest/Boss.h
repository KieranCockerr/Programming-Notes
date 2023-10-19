#pragma once
#include "Enemy.h"

class Boss : public Enemy
{
public:
	Boss();
	void specialAttack();

private:
	int m_damageMultiplier;
};

