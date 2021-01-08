#include<iostream>
#include<fstream>
using namespace std;

fstream file;

class second;
class first
{
    int r1,c1;
    int a[10][10];
    
    public:
   
    void get_f(int x, int y)
    {
        r1=x;
        c1=y;
        
    }
    friend void mat_add(first, second);
    
     friend void mat_sub(first, second);
    
     friend void mat_mult(first, second);
     
      friend void mat_trans(first);
    
    
};

class second
{
    int r2,c2;
    int b[10][10];
    
    public:
    
    void get_s(int w, int z)
    {
        r2=w;
        c2=z;
    }
   
      friend void mat_add(first, second);
    
     friend void mat_sub(first, second);
    
     friend void mat_mult(first, second);
      
};

  
 