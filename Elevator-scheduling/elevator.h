#ifndef elevator_h
#define elevator_h

class Elevator
{
	private:
		int Ctime;					//当前时间 
		int Cflr;					//当前楼层
		int DES;				//下一个目标 
		int Dir;					//方向,-1下,1上 
	public:
		int target;					//指向DES 
		void initial();				//初始化 
		int C_time();				//当前时间 
		int C_flr();				//当前楼层 
		int N_DES();				//下一个目标 
		void run_up();					//控制电梯上或下一层 
		void run_down();
		void wait();				//在某一层等待 
};

#endif
