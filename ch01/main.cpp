/*
* �ۼ��� 2025-04-10
* �ۼ��� ������
* ���� c���� c++�� �������� ������

*/

//1. ������
// �⺻���� ������ ��ġ
// �ݺ��� ���ǹ� ��� �迭 �Լ� ������ ����ü ���������
// 
//  
//2. ������
//����� ����ϴ� �Լ��� ������(������)
//����ü ���� �̸����θ� ���𰡴�
//�Լ��� ����� �߰� �Լ� �����ε� ����Ʈ ������ Ŭ����

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
	//printf("ĳ������ �̸�: %s", name);


	std::cout << "�̸��� �Է����ּ���" << std::endl;
	std::cin >> name;
	std::cout << "ĳ������ �̸�" << name << std::endl;
	//�̸� namespace
	//cout << name
	//std:: endl ���� ����� �����Ѵ�
	std::cout << "������ �̸������� ���� ����" << std::endl;
	//��� �ĺ��ڰ� ���ٴ� ������ ���
	//������ �̸��տ� �̸� ������ �߰��Ѵ�

	std::cin >> ACOM::goods;

	int number = 0;
	for (int i = 0; i < 5; i++) {
		std::cout <<i+1<< "��ǰ�� ������ �Է��� �ּ���" << std::endl;
		std::cin >> number;
		//������ �Է¹��� �Ŀ� ������ �ǹ��ϴ� ��������������Ѵ�
		ACOM::sum += number;
	}
	std::cout << "bȸ�� ��ǰ�� ����" << BCOM::sum << std::endl;
		//
	
}

