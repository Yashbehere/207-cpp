#include<iostream.h>
#include<conio.h>
class swapdata
{
public:
	void swap(int x, int y)
	{
		int t;
		t=x;
		x=y;
		y=t;
		cout<<"\nAfter Swapping : \n"<<x<<ends<<y;
	}
	void swap(char x, char y)
	{
		char t;
		t=x;
		x=y;
		y=t;
		cout<<"\nAfter Swapping : \n"<<x<<ends<<y;
	}
};
void main()
{
	int a,b;
	char p,q;
	clrscr();
	a=6;
	b=10;
	q='M';
	p='A';
	swapdata INT;
	cout<<"\n Before Swapping : \n"<<a<<"\t"<<b<<"\t"<<p<<"\t"<<q;
	INT.swap(a,b);
	INT.swap(p,q);
	getch();
}