#pragma once
#include "common.h"
/*
* 책.
* spell book,story book,quest book...
* 모든 책들이 해야하는 기능
* 읽을 수 있는가 읽는다
* 
* 상속의 3가지 방법
* public, protected, private
* 
* 1.public 상속을 하면 됩니다
*/


class BookMark {
	int page;

public:
	void Showpage();
};


//문제의 여지가 있는 코드입니다
//책은 반드시 북마크를 가지고 있는 형태
//모든 코드를 상속시켜버리면 추가를 안해도 되는 필요 없는 코드가 추가된다

//Is -A 관계 : B는 A이다
// Has - A 관계 : B는 A를 가지고 있다
class Book : public BookMark //책은 책갈피 이다, 책은 책갈피를 가지고 있다
{
private :
	BookMark* bookMark; //Bookmark* bookMark = NULL
public:
	void Read();
};


class SpellBook : public Book {

};

class storybook : public Book {

};

class questbook : public Book {

};