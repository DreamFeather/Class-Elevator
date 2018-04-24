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

void run()
{
	i=0;
	ofstream print;
	print.open(pathot.c_str(),ios::app);
	int num=0;
	for(;num<n;num++)
	{
		while(v[num].time()>H.Ctime())H.wait();
		if(v[num].Nflr()==H.Cflr())
		{
			if(H.Ctime()!=0&&i==0) print<<H.Ctime()<<" "<<H.Cflr()<<endl;
		}
			while(v[num].Nflr()>H.Cflr())H.run_up();
			while(v[num].Nflr()<H.Cflr())H.run_down();
			if(v[num].Nflr()==H.Cflr())
			{
				if(H.Ctime()!=0&&i==0) print<<H.Ctime()<<" "<<H.Cflr()<<endl;
				H.wait();
			}
		if(v[num].Tflr()==H.Cflr())
		{
			if(H.Ctime()!=0) print<<H.Ctime()<<" "<<H.Cflr()<<endl;
			if(num<n-1&&v[num+1].time()<=H.Ctime()&&v[num+1].Nflr()==H.Cflr())
			{
				i=1;continue;
			}
			else i=0;
		}
		else 
		{
			while(v[num].Tflr()<H.Cflr())H.run_down();
			while(v[num].Tflr()>H.Cflr())H.run_up();
			if(v[num].Tflr()==H.Cflr())
			{
				if(H.Ctime()!=0) print<<H.Ctime()<<" "<<H.Cflr()<<endl;
				if(num<n-1&&v[num+1].time()<=H.Ctime()&&v[num+1].Nflr()==H.Cflr())
				{
					i=1;continue;
				}
				else i=0;	
				H.wait();
			}
		}
	}
}

int main()
{
	int x,y,z;
	H.initial();
	ifstream scan;
	scan.open(pathin.c_str(),ios::in);
	scan>>n;
	for(i=0;i<n;i++)
	{
		scan>>x>>y>>z;
		v[i].input(x,y,z);
	}
	scan.close();
	run();
	return 0;
}
