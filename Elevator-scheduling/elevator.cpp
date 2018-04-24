
#include"elevator.h"
using namespace std;
void Elevator::initial()
{
	C_time=0;C_flr=0;DES=0;target=0;
}

int Elevator::Ctime(){	return C_time;}

int Elevator::Cflr(){	return C_flr;}

int Elevator::NDES(){	return DES;}

void Elevator::run_up()
{
	C_time++;C_flr++;
}

void Elevator::run_down()
{
	C_time++;C_flr--;
}

void Elevator::wait()
{
	C_time++;
}

