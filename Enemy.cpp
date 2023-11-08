#include "Enemy.h"

Enemy::Enemy() {
}

Enemy:: ~Enemy() {
}


void (Enemy::* Enemy::Enemyaction[])()= {
	&Enemy::Move,
	&Enemy::Shot,
	&Enemy::Escape
};


void Enemy::Update() {
	state_ = static_cast<rsize_t>(EnemyState::MOVE);
	(this->*Enemyaction[state_])();
	state_ = static_cast<size_t>(EnemyState::SHOT);
	(this->*Enemyaction[state_])();
	state_ = static_cast<size_t>(EnemyState::ESCAPE);
	(this->*Enemyaction[state_])();

}

void Enemy::Move() {
	printf("�������Ă����I\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));

}

void Enemy::Shot() {
	printf("���ā[�[�I\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Escape() {
	printf("�ދp�[�[�I\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}