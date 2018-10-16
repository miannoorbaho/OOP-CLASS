#include<iostream>
#include<conio.h>
//Boolean data type
using namespace std;
int main()
{
	bool x;
	cout<<"Enter 1 to continue and zero to terminate";
	cin>>x;
	if(x==1)
	cout<<"You said to continue.";
	else
	cout<<"You terminated";
	getch();
	return 0;
}
