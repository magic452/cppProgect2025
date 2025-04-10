/*
* 작성일 2025-04-10
* 작성자 조해진
* 주제 c언어와 c++의 공통점과 차이점

*/

//1. 공통점
// 기본적인 문법은 일치
// 반복문 조건문 제어문 배열 함수 포인터 구조체 파일입출력
// 
//  
//2. 차이점
//입출력 사용하는 함수가 변했음(참조자)
//구조체 선언에 이름으로만 선언가능
//함수의 기능이 추가 함수 오버로딩 디폴트 연산자 클래스

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

namespace ACOM {
	char goods[10];
	int sum;
}
namespace BCOM {
	char goods[10];
	int sum;
}

int main() {
	char name[20];
	//scanf("%s", &name);
	//printf("캐릭터의 이름: %s", name);


	std::cout << "이름을 입력해주세요" << std::endl;
	std::cin >> name;
	std::cout << "캐릭터의 이름" << name << std::endl;
	//이름 namespace
	//cout << name
	//std:: endl 같은 기능을 수행한다
	std::cout << "소주제 이름공간에 대한 이해" << std::endl;
	//결과 식별자가 없다는 에러가 뜬다
	//변수의 이름앞에 이름 공간을 추가한다

	std::cin >> ACOM::goods;

	int number = 0;
	for (int i = 0; i < 5; i++) {
		std::cout <<i+1<< "상품의 갯수를 입력해 주세요" << std::endl;
		std::cin >> number;
		//개수를 입력받은 후에 총합을 의미하는 변수에더해줘야한다
		ACOM::sum += number;
	}
	std::cout << "b회사 상품의 개수" << BCOM::sum << std::endl;
		//
	
}

