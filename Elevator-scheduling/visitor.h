#include<iostream>
#include<fstream>
using namespace std;
class visitor
{
	private:
		int A_time;						//ʱ�� 
		int Now_flr;					//���ڵȴ�¥�� 
		int T_flr;						//Ŀ��¥�� 
		int state;						//�ȴ�״̬ 
	public:
		void input(int,int,int);		//����˿͵Ĳ��� 
		int time();						//ʱ�� 
		int Nflr();						//���ڵȴ�¥�� 
		int Tflr();						//Ŀ��¥�� 
		int sta();						//�ȴ�״̬ 
		void in();						//�ϵ��� 
		void off();						//�µ��� 
};
