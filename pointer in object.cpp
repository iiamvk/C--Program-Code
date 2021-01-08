#include<iostream>
using namespace std;

class A
{
	int a;
	public:
void disp_a()
	{
		a=1;
		cout<<"\n cl_a="<<a;
	}
};

int main()
{
	A p;
	A *t;
	t=&p;
	(*t).disp_a();
	t->disp_a();
	p.disp_a();
	
}