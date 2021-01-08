#include<iostream>
using namespace std;
#include<sub_function.cpp>

void mat_mult(first f, second s)
{
  int c[10][10];
  int i,j,sum=0;
  file.open("matrix.ppt",ios::out+ios::app);
  cout<<"Enter element of a first matrix \n";
  
  file<<"\n Enter element of a first matrix \n";
  for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          cin>>f.a[i][j];
          file<<f.a[i][j]<<" ";
	}
	file<<"\n";
	}
	
  cout<<"Enter element of second matrix \n";
  file<<"\n Enter element of a second matrix \n";
  
  for(i=0;i<s.r2;i++){
      for(j=0;j<s.c2;j++){
          cin>>s.b[i][j];
          file<<s.b[i][j]<<" ";
	}
	file<<"\n";
	}
	
    cout<<"Multiplication of entered matrix \n";
    
    file<<"\nMultiplication of entered matrix \n";
    
    for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          sum=f.a[i][j]*s.b[i][j];
         
c[i][j]=sum;
  cout<<c[i][j]<<"\t";
  file<<c[i][j]<<" ";
	}
	sum=0;
	cout<<"\n";
	file<<"\n";
	}  
	file.close();  
}