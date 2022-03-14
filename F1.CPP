//program to demostrate factorial
#include<iostream.h>
#include<conio.h>
void main()
{
	double no,fact=1,i;
	clrscr();
	cout<<"Enter the Number=";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial is="<<fact;

	getch();
}