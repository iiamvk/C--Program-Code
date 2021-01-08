#include<iostream>
using namespace std;

int main()
{
	int i,*p;
	p=new int[4];
	
	cout<<"rnter no.";
	for(i=0;i<4;i++){
		cin>>p[i];//*(p+i)
		
	}
	
	
		cout<<"no. is";
	for(i=0;i<4;i++){
		cout<<*p++<<" ";
	
		
	}
	delete []p;
}