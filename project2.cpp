//C++ Program to check if User is eligible for Driver's License or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"\nEnter age of the user: ";
	cin>>age;
	if(age>18)
	{
		cout<<"You are eligible for Driver's Lincense";
	}
	else
	{
		cout<<"You are not eligible";
		cout<<"\nWait for "<<18-age<<" year/s";
	}
}
