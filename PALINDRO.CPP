//program to check whether number is palindrome or not
#include<iostream.h>
#include<conio.h>
void main()
{
	long long int p,no,r,rev=0;
	clrscr();
	cout<<"Enter the Number=";
	cin>>no;

	p=no;

	cout<<"**********output*************\n";

	while(no>0)
	{
		r=no%10;
		rev=(rev*10)+r;
		no=no/10;
	}

	if(rev==p)
	{
		cout<<"Number is Palindrome";
	}
	else
	{
		cout<<"Number is not Palindrome";
	}
	getch();
}