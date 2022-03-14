#include<iostream.h>
#include<conio.h>
void swap (int*x,int*y);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter Value of a:"<<endl;
	cin>>a;
	cout<<"Enter Value of b:"<<endl;
	cin>>b;
	cout<<"Before swapping"<<endl;
	cout<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"After swapping"<<endl;
	cout<<a<<"\t"<<b<<endl;
	getch();
}
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	 *x=*y;
	 *y=temp;
}