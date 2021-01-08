#include<iostream>
using namespace std;

class A
{
	int a;
	public:
virtual void disp()=0;

};


class B:public A
{
	int a;
	public: 
	void disp(){
		cout<<"\n derived class";
	}
};


int main()
{
A *p;
B d;
p=&d;
p->disp();
}