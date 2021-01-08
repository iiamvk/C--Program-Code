#include<iostream>
using namespace std;

class class_second;
class class_first{
	int x,y;
	public:
	void setxy(int a,int b)
	{
		x=a; y=b;
	}
	
	void getxy()
	{
		int z;
		z=x+y;
		cout<<"\n x= "<<x<<"y= "<<y<<"x+y= "<<z<<"\n";
	}
	
	class_first operator +(class_first );
	
	friend class_first operator +(class_first, class_second);
};

class_first class_first::operator +(class_first r)
{
	class_first t;
	t.x=x+r.x;
	t.y=y+r.y;
	return t;
}


class class_second {
	int x,y;
	public:
	void set(int a,int b)
	{
		x=a; y=b;
	}
	
	void get()
	{
		int z;
		z=x+y;
		cout<<"\n x= "<<x<<"y= "<<y<<"x+y= "<<z<<"\n";
	}
	
friend class_first operator +(class_first, class_second);
};
class_first operator +(class_first f, class_second s){
	
	class_first temp;
	temp.x=f.x+s.x;
	temp.y=f.y+s.y;
	
	return temp;
}
int main(){
	
	class_first h,k,i,j,p;
	h.setxy(4,5);
	k.setxy(10,20);
	i=h+k;
	h.getxy();
	k.getxy();
	i.getxy();
	
	class_second g,d;
	d.set(30,40);
	d.get();
	
	p=k+d;
	p.getxy();
}
	