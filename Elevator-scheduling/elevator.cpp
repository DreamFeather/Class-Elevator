#include<iostream>
#include<fstream>
#include"elevator.h"
using namespace std;
void Elevator::initial()
{
	Ctime=0;Cflr=0;DES=0;state=0;targe=0;
}

int Elevator::C_time(){	return Ctime;}

int Elevator::C_flr(){	return Cflr;}

int Elevator::N_DES(){	return DES;}

void Elevator::run_up()
{
	Ctime++;Cflr++;
}

void Elevator::run_down()
{
	Ctime++;Cflr--;
}

void Elevator::wait()
{
	Ctime++;
}
