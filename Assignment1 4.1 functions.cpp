#include<iostream>
#include<conio.h>
//functions
using namespace std;
int add(int x, int y)
{
	return x+y;
}
int main()
{
	int a,b;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter a number: ";
	cin>>b;
	cout<<"Sum of two number is: "<<add(a,b);
	
	
	
	
	getch();
	return 0;
}
