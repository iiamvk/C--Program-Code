#include<iostream>
using namespace std;
// template in class
template <class vk>
class add
{
	vk a,b;
	public:
	void get(vk x, vk y)
	{
		a=x;
		b=y;
	}
	void disp()
	{
		cout<<"Addition is="<<(a+b);
	}
};
int main()
{
	float a,b;
	cin>>a>>b;
	add <float> obj;
	obj.get(a,b);
	obj.disp();
}