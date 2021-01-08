#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	virtual void get(int x)
	{
		a=x;
	
	}
virtual void disp()
	{
		cout<<"\n class A="<<a;
	}
};


class B:public A
{
	int b;
	public:
	void get(int x)
	{
		b=x;
	
	}
void disp()
	{
	cout<<"\n class B="<<b;
	}
};
int main()
{
	A obj1;
	A *ptr;
	ptr=&obj1;
	(*ptr).get(4);
	ptr->disp();
	
B obj2;
	A *ptr1;
	ptr1=&obj2;
	(*ptr1).get(4);
	ptr1->disp();
}
	
	

	