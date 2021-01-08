// constracter in derived clasess

/* multiple class

#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A(int x)
	{
		a=x;
		cout<<"\n class A="<<a;
	}
};

class B
{
	int a;
	public:
	B(int x)
	{
		a=x;
		
		cout<<"\n class B="<<a;
	}
};

class C:public B,public A
{
	int a;
	public:
	C(int x,int y,int z):A(x),B(y)
	{
		a=z;
		cout<<"\n class C="<<a;
	}
};
 int main()
 {
 	C obj(10,20,30);
 	
 	
 }



*/
//Multilevel

#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A(int x)
	{
		a=x;
		cout<<"\n class A="<<a;
	}
};

class B:public A
{
	int a;
	public:
	B(int x,int y):A(y)
	{
		a=x;
		
		cout<<"\n class B="<<a;
	}
};

class C:public B
{
	int a;
	public:
	C(int x,int y,int z):B(x,y)
	{
		a=z;
		cout<<"\n class C="<<a;
	}
};
 int main()
 {
 	C obj(10,20,30);
 	
 	
 }
