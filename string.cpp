#include<iostream>

using namespace std;

class base
{
	char *name;
	int length;
	public:
	base()
	{
		length=0;
		name= new char[length+1];
	}
	
	base(char *s)
	{
		length=0;
		name = new char[length+1];
		strcpy(name,s);
	}
	
	void show()
	{
		cout<<"\n"<<name<<"\n";
	}
	
	void join(base a, base b)
	{
		length=a.length+b.length;
		delete name;
		name= new char[length+1];
		strcpy(name,a.name);
		strcat(name,b.name);
	}
};

int main()
{
	char *first="vinod";
	base name1("fi");
	base name2("kumar"),name3("vk");
	base s1,s2;
	s1.join(name1,name2);
	s2.join(s1,name3);
	name1.show();
		name2.show();
			name3.show();
				s1.show();
					s2.show();
	
	
}