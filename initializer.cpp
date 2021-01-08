#include<iostream>
using namespace std;

class add
{
	int result;
	const int a;
	int &b;
	public:
	add(int x,int &y,int r):a(x),b(y),result(r)
	{
		cout<<"\n constructor is worked";
	}
	void disp()
	{
		cout<<"\n result = "<<result;
		
		result=a+b;
		
		cout<<"\n after calling result = "<<result;
	}
};
int main()
{
	int c=10;
	add obj(20,c,0);
	obj.disp();
}