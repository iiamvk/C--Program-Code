#include<iostream>
using namespace std;

class dynamic{
	
	public:
	
	int *p,*q,*r;
	
	dynamic(int x,int y){
		p= new int;
		q= new int;
		r= new int;
		p=x; q=y;
		*r=*p+*q;
		cout<<"\n result: "<<*p<<"  "<<*q<<" "<<*r;
	}
 ~dynamic(){
 
 delete p;
 delete q;
 delete r;
 }
};

int main(){
	
	dynamic obj(30,80);
	
	return 0;
}