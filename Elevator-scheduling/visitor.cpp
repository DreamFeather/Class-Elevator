
#include"visitor.h"
using namespace std;
void visitor::input(int w,int nf,int tf)
{
	A_time=w;Now_flr=nf;T_flr=tf;state=0;
}

int visitor::time(){	return A_time;}

int visitor::Nflr(){	return Now_flr;}

int visitor::Tflr(){	return T_flr;}

int visitor::sta(){		return state;}

void visitor::in(){		state=1;}

void visitor::off(){	state=-1;}
