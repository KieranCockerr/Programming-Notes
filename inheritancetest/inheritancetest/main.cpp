#include <iostream>

#include "Enemy.h"
#include "Boss.h"

using namespace std;

int main()
{
	cout << "Enemy created\n";
	Enemy enemy;

	cout << "Boss created\n";
	Boss boss;

	enemy.attack(); // call attack function

	boss.attack(); // call attack from enemy in boss
	boss.specialAttack(); // call the boss special attack function
}