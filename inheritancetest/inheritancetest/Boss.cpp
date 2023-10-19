#include "Boss.h"
#include "Enemy.h"

#include <iostream>

Boss::Boss() : m_damageMultiplier(3)
{

}

void Boss::specialAttack()
{
	std::cout << "boss attacks dealing " << (m_damageMultiplier * m_damage) << " damage \n";
}
