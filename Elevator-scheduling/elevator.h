#include<iostream>
#include<fstream>
using namespace std;
class Elevator
{
	private:
		int Ctime;					//��ǰʱ�� 
		int Cflr;					//��ǰ¥��
		int DES[500];				//��һ��Ŀ�� 
		int Dir;					//����,-1��,1�� 
	public:
		int target;					//ָ��DES 
		void initial();				//��ʼ�� 
		int C_time();				//��ǰʱ�� 
		int C_flr();				//��ǰ¥�� 
		int N_DES();				//��һ��Ŀ�� 
		void run_up();					//���Ƶ����ϻ���һ�� 
		void run_down();
		void wait();				//��ĳһ��ȴ� 
};
