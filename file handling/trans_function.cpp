#include<iostream>
using namespace std;
#include<mult_function.cpp>

void mat_trans(first f)
{
  int c[10][10];
  int i,j;
  
  file.open("matrix.ppt",ios::out+ios::app);
  cout<<"Enter element of a first matrix \n";
  
  file<<"\nEnter element of a first matrix \n";
  
  for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          cin>>f.a[i][j];
          file<<f.a[i][j]<<" ";
	}
	file<<"\n";
	}
	
  
    cout<<"Transpose of a  entered matrix \n";
    
    file<<"\n Transpose of a  entered matrix \n";
    
    for(i=0;i<f.r1;i++){
      for(j=0;j<f.c1;j++){
          c[j][i]=f.a[i][j];
         
	}
	}    
	
	for(i=0;i<f.r1;i++){
	    for(j=0;j<f.c1;j++){
	        cout<<c[i][j]<<"\t";
file<<c[i][j]<<" ";	        
	}
	cout<<"\n";
	file<<"\n";
	}
	file.close();
}