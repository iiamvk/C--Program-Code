#include<iostream>
using namespace std;


int main()
{
	
	char ch;
	int v=0;
	cout<<"\n Enter text \n";
	while (ch!='\n'){
		cin.get(ch);
		cout.put(ch);
		v++;
	}
	cout<<"v "<<v-1;
}