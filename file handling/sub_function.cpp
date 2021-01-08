#include<iostream>
using namespace std;
#include<function.cpp>

void mat_sub(first f, second s)
{
  int c[10][10];
  int i,j;
  
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
	
  cout<<"Enter element of a second matrix \n";
  
   file<<"\n Enter element of a second matrix \n";
  
  for(i=0;i<s.r2;i++){
      for(j=0;j<s.c2;j++){
          cin>>s.b[i][j];
          file<<s.b[i][j]<<" ";
	}
	file<<"\n";
	}
	
    cout<<"Subtraction of entered matrix \n";
    
    file<<"\n Subtraction of entered matrix \n";
  
    for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          c[i][j]=f.a[i][j]-s.b[i][j];
          cout<<c[i][j]<<"\t";
file<<c[i][j]<<" ";
	}
	cout<<"\n";
	file<<"\n";
	}    
	file.close();
}