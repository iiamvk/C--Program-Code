#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
void get()
	{
		a=10;
		b=-20;
	}
	void operator -()
	{
		a=-a;
		b=-b;
	}
	void dips()
	{
		cout<<"\n"<<a<<"  "<<b;
	}
};

int main()
{
	A t;
	t.get();
	-t;
	t.dips();
}

