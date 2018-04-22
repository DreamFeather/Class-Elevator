#include<iostream>
#include<fstream>
using namespace std;
class visitor
{
	private:
		int A_time;						//时间 
		int Now_flr;					//现在等待楼层 
		int T_flr;						//目标楼层 
		int state;						//等待状态 
	public:
		void input(int,int,int);		//输入乘客的参数 
		int time();						//时间 
		int Nflr();						//现在等待楼层 
		int Tflr();						//目标楼层 
		int sta();						//等待状态 
		void in();						//上电梯 
		void off();						//下电梯 
};
