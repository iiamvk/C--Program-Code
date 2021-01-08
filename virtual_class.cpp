#include<iostream>
using namespace std;

class A
{
	int a;
	public:
void disp_a()
	{
		a=1;
		cout<<"cl_a="<<a;
	}
};


class B:public virtual A
{
	int a;
	public:
void disp_b()
	{
		a=2;
		cout<<"cl_b="<<a;
	}
};

class C:public virtual A
{
	int a;
	public:
void disp_c()
	{
		a=3;
		cout<<"cl_c="<<a;
	}
};

class D:public B,public C
{
	int a;
	public:
void disp_d()
	{
		a=4;
		cout<<"cl_d="<<a;
	}
};

int main()
{
	D t;
	t.disp_a();
	t.disp_b();
	t.disp_c();
	t.disp_d();
}