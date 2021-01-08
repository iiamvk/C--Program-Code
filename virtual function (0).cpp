#include<iostream>
using namespace std;

class base{
	
	int x,y;
	public:
	virtual void set_xy(int a,int b){
		x=a; y=b;
	}
	
	virtual void cal_Area(){
		cout<<"\n Area Of The Triangle \n";
		cout<<"("<<((x*y)/2)<<")";
	}
};

class Derived: public base
{
	int x,y;
	public:
virtual	void set_xy(int a,int b){
		x=a; y=b;
	}
	
	virtual void cal_Area(){
		cout<<"\n Area Of The Rectangle \n";
		cout<<"("<<(x*y)<<")";
	}
};

int main(){
	
	base obj1,*ptr;
	ptr=&obj1;
	ptr->set_xy(3,4);
	ptr->cal_Area();
	
	Derived obj2;
	ptr=&obj2;
	ptr->set_xy(5,6);
	ptr->cal_Area();
	return 0;
}

