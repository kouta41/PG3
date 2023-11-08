#pragma once
#include <stdio.h>
#include <thread>
#include <chrono>

enum class EnemyState {
	MOVE,
	SHOT,
	ESCAPE
};


class Enemy
{
public:
	Enemy();
	~Enemy();


	void Update();

	void Move();
	void Shot();
	void Escape();

private:
	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* Enemyaction[])();
	size_t state_;
};