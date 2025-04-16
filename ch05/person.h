#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"common.h"

//이름이 person 구조체로 사람은 나이 이름 

//cdhk c++의 차이점3
//malloc을 사용하여 동적 할당을 함
//free라고 해제를 해줘야함
//ㅊ++에선 new와 delete를 사용함

//new c++ 동적할당하는 키워드
//delete 메모리해재하는 키워드
// 
// 
//생성자 : 객체가 데이터를 생성할 때 초기화 시켜추는 방법
//소멸자 : 객체가 소멸할때 처음으로 호출되는 기능


enum Gender
{
	boy,
	girl
};


struct Person 
{
	int age;
	char* name;
	string sName;


	//디폴트 생성자
	Person() {}

	Person(int age, const string& name) : age(age), sName(sName) {};


	//연산자 오버로딩
	Person(int age, const char* str) : age(age) {
		//메모리의 공간을 직접 생성하여
		// 새로 생성한 공간에 외부에 있는 데이터를 복사하여 옮겨놔야한다	
		name = new  char[strlen(str) + 1];
		strcpy(name, str);
	}
	//소멸자 : 객체가 소멸될 때 자동으로 호출된다
	~Person() {
		cout << "Person의 소멸자가 자동으로 호출되었다";
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const;//객체 안의 데이터를 변형없이 사용하겠다 사용자에게 알려줌
	
};