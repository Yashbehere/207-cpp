#include<iostream.h>
#include<conio.h>
class abc
{
	int n1,n2,n3;

	public:
		void get();
		void add();
};

void abc::get()
{
	cout<<"Enter the value of n1:->";
	cin>>n1;
	cout<<"Enter the value of n2:->";
	cin>>n2;
}

void abc::add()
{
	n3=n1+n2;
	cout<<n3;
}

int main()
{
	abc a;
	clrscr();
	a.get();
	a.add();
	getch();
}