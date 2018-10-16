#include<iostream>
#include<conio.h>
//switches
using namespace std;
int main()
{
	int a,b, opt;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter a number: ";
	cin>>b;
	cout<<"Enter 1 to add them, 2 to subtract";
	cin>>opt;
	
	switch(opt)
	{
		case 1:
			cout<<"Sum of two number is: "<<a+b;
			break;
			
		case2:
			cout<<"Difference of two number is: "<<a-b;
			break;
			
		default:
			cout<<"no operation selected.";
	}
	getch();
	return 0;
}
