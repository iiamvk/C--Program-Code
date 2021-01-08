#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	void get(int x)
	{
		a=x;
	
	}
void disp()
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
	B obj1;
	B *ptr;
	ptr=&obj1;
	(*ptr).get(4);
	ptr->disp();
	

	A *ptr1;
	ptr1=&obj1;
	(*ptr1).get(4);
	ptr1->disp();
}
	
	

	