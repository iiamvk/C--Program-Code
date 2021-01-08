#include<iostream>
using namespace std;

// type conversion  class type to primitive type.

class throwdata
{
	int a,b;
	public:
	
	throwdata(int x)
	{
		a=x,b=32;
	}
	void showdata()
	{
	cout<<"\n a="<<a<<" b="<<b;
	}
	
	operator int()
    {
    	return (a+b);
    }
};
int main()
{
	int a=12.8,add;
	throwdata obj1=a;
	obj1.showdata();
	add=obj1;
	cout<<"  add="<<add;
}


	