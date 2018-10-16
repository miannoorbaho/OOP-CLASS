#include<iostream>
#include<conio.h>
//while loop
using namespace std;
int main()
{
	int a=1;
	
	cout<<"Body of loop executed even condition is false: "<<endl;
	do
	{
		cout<<a<<" ";
		a++;	
	}while(a==10);
	
	getch();
	return 0;
}
