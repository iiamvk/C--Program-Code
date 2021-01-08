#include<iostream>

using namespace std;
#include<trans_function.cpp>



int main()
{
    first obj1;
    second obj2;
    
    int row, col;
    int opt;
    
    cout<<"Enter row and column of a matrix \n";
    cin>>row>>col;
    
    file.open("matrix.ppt",ios::out);
   file<<"Enter row and column of a matrix \n";
   
   file<<row<<"  "<<col;
   
   file.close();
   
   obj1.get_f(row,col);
   obj2.get_s(row,col);
    
   cout<<"Choose Any Option To Perform Operation \n\n";
       
   cout<<"1. Addtion of Matrix \n";
   cout<<"2. Subtraction of Matrix \n";
   cout<<"3. Multiplication of Matrix \n";
   cout<<"4. Transpose of Matrix \n";
   cout<<"EXIT \n \n";
   cin>>opt;
   
   switch (opt)
   {
    case 1:
    cout<<"You Choose Option "<<opt<<"\n";
    mat_add(obj1,obj2);
    break;
    
     case 2:
       cout<<"You Choose Option "<<opt<<"\n";
    mat_sub(obj1,obj2);
    break;
    
     case 3:
       cout<<"You Choose Option "<<opt<<"\n";
    mat_mult(obj1,obj2);
    break;
    
     case 4:
       cout<<"You Choose Option "<<opt<<"\n";
    mat_trans(obj1);
    break;
    
    default:
    break;
   }
  }  