#pragma once

#include"common.h"


class Gun {

};

class Human {

};
class Police //경찰은 총이다, 경찰은 사람이다
{
private :
	Gun* gun;
};

class Student : public Human 
{

};

