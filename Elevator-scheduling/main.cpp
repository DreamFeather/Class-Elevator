#include<iostream>
#include<fstream>
#include"elevator.cpp"
#include"visitor.cpp"

using namespace std;
const string pathin="input.txt";
const string pathot="output.txt";
int n,i;

Elevator H;
visitor v[500];


void run();//调度算法(暂无)

/*void run_down()
{
	H.run_down();
	if(v[i+1].time()==H.C_time())
	{
		
	}
}

void run_up()
{
	H.run_up();
	if(v[i+1].time()==H.C_time())
	{
		
	}
}

void start()
{
	for(i=0;i<n;i++)
	{
		while(H.C_time()>v[i].time())
		H.wait();
		if(H.C_time()==v[i].time())
		{
			while(H.C_flr()<v[i].Nflr())run_up();
			while(H.C_flr()>v[i].Nflr())run_down();
			if(H.C_flr()==v[i].Nflr())
			{
				H.wait();v[i].in();
			}
		}
	}
}*/

int main()
{
	int x,y,z;
	H.initial();
	ifstream scan;
	ofstream print;
	scan.open(pathin.c_str(),ios::in);
	print.open(pathot.c_str(),ios::app)
	scan>>n;
	for(i=0;i<n;i++)
	{
		scan>>x>>y>>z;
		v[i].input(x,y,z);
		print<<v[i].time()<<" "<<v[i].Nflr()<<" "<<v[i].Tflr()<<endl;
	}
	scan.close();
	print.close();
	//start();
	return 0;
}
