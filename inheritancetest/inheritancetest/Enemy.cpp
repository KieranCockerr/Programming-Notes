#include "Enemy.h"
#include <iostream>

Enemy::Enemy() : m_damage(30)
{

}

void Enemy::attack()
{
	std::cout << m_damage << " damage dealt\n";
}
