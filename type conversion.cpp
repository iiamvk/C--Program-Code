#include<iostream>
using namespace std;

// type conversion primitive to class type.

class getdata
{
	int a,b;
	public:
	
	getdata(int x)
	{
		a=x,b=32;
	}
	void showdata()
	{
	cout<<"\n a="<<a<<" b="<<b<<" a+b="<<(a+b);
	}
};
int main()
{
	int a=12.8,b=11;
	getdata obj1=a;
	obj1.showdata();
}


	