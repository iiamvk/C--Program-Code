#include<iostream>
using namespace std;

namespace vk
{
	class add
	{
		int a,b;
		public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void disp()
		{
			cout<<"\n addition is= "<<(a+b);
		}
	};
}