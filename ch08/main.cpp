#include "common.h"
#include"Book.h"
#include "Monster.h"
/*
* 상속
* 1. 공통된 내용을 하나로 묶는 방법
* 2. 언제 상속을 해야하는가
* 
* Unit의 행동 시스템 구현
* 유닛이 공격한다
* unit.attack();
* 1. 문제 생김 똑같은 유닛코드를 실행한다
* 2.virtual 키워드를 사용하면 실제 코드가 실행된다
* 
* unit 코드를 이용해서 
	Attack,stop...등을 만들었습니다
	상속을 시켜서 특별한 공격을 하도록 만든다

*/


int main() {
	Book book;
	SpellBook spbook;
	storybook stbook;
	questbook qubook;

	book.Read();
	book.Showpage();
	spbook.Read();
	spbook.Showpage();
	stbook.Read();
	qubook.Read();
	qubook.Showpage();

	probe probe1(true);

	probe1.ReturnAttacker()->Attack();

	Attacker* tempAttacker;
	tempAttacker = probe1.ReturnAttacker();

	cout << "유닛의 공격" << endl;

	unit& selectunit = probe1;//공통타입으로 똑같은걸 표현하기
	unit& selectunit = zealot;
	unit& selectunit = dragoon;
}