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
	int a=5,b;
	int *p=&a;
	cout<<"Value of variable obtained directly: "<<a<<endl;
	cout<<"Value of variable obtained through pointer "<<*p;	
	getch();
	return 0;
}
