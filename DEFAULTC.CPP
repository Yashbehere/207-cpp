#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int count;
	public:
		demo();
		void print();
}

demo::demo()
{
	cout<<"Constructor called"<<endl;
	count=0;
}

void demo::print()
{
	cout<<count<<endl;
}

void main()
{
	clrscr();
	demo d;
	d.print();

	demo d1;
	d1.print();

	getch();
}








