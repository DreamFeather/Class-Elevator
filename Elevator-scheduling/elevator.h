#ifndef elevator_h
#define elevator_h

class Elevator
{
	private:
		int C_time;					//��ǰʱ�� 
		int C_flr;					//��ǰ¥��
		int DES;				//��һ��Ŀ�� 
		int Dir;					//����,-1��,1�� 
	public:
		int target;					//ָ��DES 
		void initial();				//��ʼ�� 
		int Ctime();				//��ǰʱ�� 
		int Cflr();				//��ǰ¥�� 
		int NDES();				//��һ��Ŀ�� 
		void run_up();					//���Ƶ����ϻ���һ�� 
		void run_down();
		void wait();				//��ĳһ��ȴ� 
};

#endif
