#include<iostream>
using namespace std;


int main()
{
	char name[20],num[10];
	
	// Enter Data Using Getline()
	
	cout<<"\n\tEnter Your Name \n";
	cin.getline(name,21);
	cout<<"\n\n\tEnter Your Mobile Number \n";
	cin.getline(num,11);
	
	// Display Data Using Write()
	
	cout.write(name,11);
	cout<<"\n";
	cout.write(num,10);
}
	