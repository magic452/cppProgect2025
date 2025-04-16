#include<iostream>
using namespace std;

#include"common.h"
#include"person.h"

//주제 앝은 복사 깊은 복사
void example() {
	//정수를 저장하는 데이터 타입
	int numA = 10;
	//numB라는 녀석은 nmuA에 저장되어있는 값을 옮기고 싶다
	//numA의 값을 nmuB에 복사를 한다
	int	numB = numA;
	//정수의 주소를 담는 변수를 선언하시오
	int* numAptr = &numA;
	int* numBptr = numAptr;

	//numBptr에 들어간 

	cout << "numA의 주소" << &numA << endl;
	cout << numAptr << endl;
	cout << numBptr << endl;

	//변수끼리 대입연산자 사용한 경우
	//numA,numB 각각 다른 공간에 저장된다
	//주소끼리 대입연산자 사용한경우
	//주소가 가리키는 값이 된다

	//해당주소에서 하나의 변수를 해재하면 다른 변수에서 접근을 할 수 없다
}
int main() {
	//example();
	//Person human1 = { 20 };//데이터를 복사해서 넣어줘야한다



	Person human(20, "모험가");
	Person humanClone;
	Person human2(30, "용병");
	humanClone.Clone(human);
	human.Show();
	humanClone.Show();

	//human1.Show();

}