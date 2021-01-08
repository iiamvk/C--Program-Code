#include<iostream>
using namespace std;

class first{
	int x;
	public:
	void set_x(int a){
		x=a;
	}
	
	int get_x(){
		return x;	
	}
};

class second{
	int y;
	public:
	void set_y(int b){
		y=b;
	}
	
	int get_y(){
		return y;	
	}
};

class derived:public first, public second
{
	int t,a,b;
	public:
	
		void swap(){
		a=get_x();
		b=get_y();
		t=b;
		b=a;
		a=t;
	}
	
	void show_b(){
		cout<<"\nbefore swapping a= "<<get_x()<<"  b= "<<get_y();
	}
	
	void show_a(){
		cout<<"\n after swapping a= "<<a<<" b= "<<b;
	}
};

int main(){
	derived obj1;
	obj1.set_x(5);
	obj1.set_y(7);
	obj1.show_b();
	obj1.swap();
	obj1.show_a();
return 0;
}
	
		
		
		

