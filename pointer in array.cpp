#include<iostream>
using namespace std;

int main()
{
	int a[3][3];
	
	int *ptr1,i,j;
	ptr1=&a[0][0];
	
	

	cout<<"enter matrix row and column  ";
	
	cout<<"\n element \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
	}
	}
	
	cout<<"transpose of a matrix \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<*ptr1<<" ";
			*ptr1++;
	}
	cout<<"\n";
	}
	
	
	
}
