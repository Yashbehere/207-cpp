#include<iostream.h>
#include<conio.h>
int max(int x, int y, int z)
{
	if(x>y&&x>>z)
	return x;
	else if(y>x&&y>x)
	return y;
	else
	return z;
}
void main()
{
	int num1,num2,num3,sto;
	clrscr();
	cout<<"Enter three Number : ";
	cin>>num1>>num2>>num3;
	sto=max(num1,num2,num3);
	cout<<"The Grater Number is : "<<sto;
getch();
}