#include<iostream.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	cout<<"Enter the num";
	cin>>num;
	if(num%2==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
	even:cout<<"Even No";
	getch();
	return;
	odd:cout<<"odd No";
	getch();

}