#pragma once
#include "common.h"
class Monster
{
};


//프로젝트 간단하게 시작하는 방법
//1. 익숙한 게임을 가져온다
//2. 하나의 데이터를 선택해서 객체로 표현한다
// 
//슈퍼마리오를 기준으로 해보자
//마리오는 좌우로움직이고 점프가 가능하고 버섯을 먹어 업그레이드가 가능
//적은 좌우 움직임과 점프가 가능

//Has - A
//virtual 키워드를 언제 추가하고 언제 사용하는지
//코드를 상속하는 객체의 기능이 추가적인 특징을 가진다

class Attacker
{
public :
	void Attack();
};

class Flyer
{

};
class unit //유닛은 공격 가능한가?, 공격을 못할수도 있다
{
	Attacker* attacker;
	Flyer* Flyer;
	bool isAttackable;

public:
	unit() 
	{
		Attacker = new Attacker();
	}
	unit(bool attacker) {
		isAttackable = attackable;
		if (isAttackable) {
			attacker = new Attacker();
		}
	}
};

public:

	Attacker* ReturnAttacker();
	virtual void Attack();
	virtual void Stop();
	void Move();
	void Partrol();
	void Hold();
	virtual useskill();
class Factory
{

};
class nexus : public Factory
{

};

class GateWay : public Factory
{

};
class probe : public unit //프로브는 유닛인가
{public :
	probe(bool Attackable) : unit(Attackable) {}
	void Attack();
	void Stop();
};

class zealot : public unit
{
public:
	void Attack();
	void Stop();
};

class dragoon : public unit
{
public:
	void Attack();
	void Stop();
};