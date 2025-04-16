#include "person.h"

//앝은 복사 : 데이터의 값을 그대로 다른 변수에 가져오는 것
//깊은 복사 : 주소를 새로 만들어서 값을 복사해서 저장하는것




void Person::Clone(const Person& other)
{
	age = other.age;   // 앝은 복사 -> 깊은 복사
	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
}

void Person::Show() const
{
	cout << "나이 : " << age << endl;
	cout << "나이 : " << name << endl;
}
