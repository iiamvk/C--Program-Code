#include<iostream>
using namespace std;
#include<string.h>
#include<string>

int main()
{
	string s1=" vinod ",s2,s3;
	s2=" kumar ";

// assign string in s3 using assign().

	cout<<s3.assign(" kumar \n");
	
	//add to string using append().
	
	s3=s1.append(s2);
	
	cout<<s3<<endl;
	
	// size() return size of string.
	
	cout<<s3.size()<<endl;
	
	// insert value in given index      using insert().
	
	s3.insert(7,"vk");
	
	cout<<s3<<endl;
	
	// replace() is replace the cotent of the string.
	
	s3="maihudon";
	s3.replace(4,5,"d");
	
	cout<<s3<<endl;
	
}