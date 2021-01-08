#include<iostream>
using namespace std;
#include<clasess.cpp>

void mat_add(first f, second s)
{
  int c[10][10];
  int i,j;
  
  cout<<"Enter element of a first matrix \n";
  
  file.open("matrix.ppt",ios::out+ios::app);
  
  file<<"\n Enter element of a first matrix \n";
  
  for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          cin>>f.a[i][j];
          file<<f.a[i][j]<<" ";
	}
	file<<"\n";
	}
	
file<<"\n Enter element of a second matrix \n";

  cout<<"Enter element of second matrix \n";
  
  for(i=0;i<s.r2;i++){
      for(j=0;j<s.c2;j++){
          cin>>s.b[i][j];
          file<<s.b[i][j]<<" ";
	}
	file<<"\n";
	}
	
    cout<<"Addition of entered matrix \n";
    
    file<<"\n Addition of entered matrix \n";
    
    for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          c[i][j]=f.a[i][j]+s.b[i][j];
          cout<<c[i][j]<<"\t";
          file<<c[i][j]<<" ";
	}
	cout<<"\n";
	file<<"\n";
	}    
	file.close();
}