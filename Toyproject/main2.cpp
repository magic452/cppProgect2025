//cpp 게임화면 구성하기
// 다른ㅇ 두 프로젝트를 합칠떄 문제를 최소화할수 있다.
//코드를 분류 할 수 있다.
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
	std::cout << "플레이어의 정보";

	char name[10];
	while (true) {
		int inputNumber = 0;

		std::cout << "사용자의 이름을 변경가능 2.사용자의 정보 출력";
		std::cin >> inputNumber;
		if (inputNumber == 1) {
			std::cout << "이름을 입력해 주세요"<<std::endl;
			std::cin >> name;
		}
		else if (inputNumber == 2) {
			ConsoleUtils::GotoXY(10, 10);
			std::cout << "플레이어의 정보";
			ConsoleUtils::GotoXY(10, 11);
			std::cout << "플레이어의 정보"<<name;
			
			std::cout << name;
			_getch();
		}
		else {

		}
		system("cls");
	}
}