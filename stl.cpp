#include<iostream>
using namespace std;
#include<map>

int main()
{
	map <int, string> m1;
	m1[100]="vinod";
	m1[150]="kumar";
	m1[200]="vk";
	m1[250]="great";
	
	
	
	map <int, string> m2{
		{100,"good"},{150,"very good"},{200,"best"},{250,"most"}};
	// iterator is using
	
	map <int, string>:: iterator p=m2.begin();
	
	// inserting new key-pair
	
	m2.insert(pair <int,string> (170,"india"));
	
	while (p!=m2.end())
	{
		cout<<p->second<<endl;
		p++;
	}
	
	cout<<"\n\n"<<m2.size();
}
