//cpp ����ȭ�� �����ϱ�
// �ٸ��� �� ������Ʈ�� ��ĥ�� ������ �ּ�ȭ�Ҽ� �ִ�.
//�ڵ带 �з� �� �� �ִ�.
#include<iostream>
#include<Windows.h>
#include<conio.h>
namespace ConsoleUtils {
	void GotoXY(int x, int y) {
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

int main() {
	std::cout << "helloworld" << std::endl;
	ConsoleUtils::GotoXY( 10,10) ;
	std::cout << "�÷��̾��� ����";

	char name[10];
	while (true) {
		int inputNumber = 0;

		std::cout << "������� �̸��� ���氡�� 2.������� ���� ���";
		std::cin >> inputNumber;
		if (inputNumber == 1) {
			std::cout << "�̸��� �Է��� �ּ���"<<std::endl;
			std::cin >> name;
		}
		else if (inputNumber == 2) {
			ConsoleUtils::GotoXY(10, 10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtils::GotoXY(10, 11);
			std::cout << "�÷��̾��� ����"<<name;
			
			std::cout << name;
			_getch();
		}
		else {

		}
		system("cls");
	}
}