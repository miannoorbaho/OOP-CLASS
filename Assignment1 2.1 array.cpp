#include<iostream>
#include<conio.h>
//array
using namespace std;
int main()
{
	int array1[2]={5, 10};
	int array2[2]={0, 1};
	int array3[2]={0};
	
	cout<<"Array 1: "<<endl;
	for(int x=0; x<2; x++)
	{
		cout<<array1[x]<<" ";
	}
	cout<<endl<<"Array 2: "<<endl;
	for(int x=0; x<2; x++)
	{
		cout<<array2[x]<<" ";
	}
	cout<<endl<<"Sum of two arrays is: "<<endl;
	
	for(int a=0; a<2; a++)
	{
		array3[a]=array1[a]+array2[a];
		cout<<array3[a]<<" ";
	}
	getch();
	return 0;
}
