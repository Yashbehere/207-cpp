//program to demostrate constructor
#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int x,y;
	public:

		demo();
		demo(int a, int b);
		demo(demo &q);

		~demo();
		void show();
};
demo::demo()
{
	cout<<"constructor called"<<endl;
}

demo::demo(demo &q)
{
	x=q.x;
	y=q.y;
}

demo::demo(int a, int b)
{
  x=a;
  y=b;
}

void demo::show()
{
	cout<<"value of x is:->"<<x<<endl;
	cout<<"value of y is:->"<<y<<endl;
}

demo::~demo()
{
	cout<<"Desctructor called"<<endl;
}

void main()
{

	clrscr();

	demo d;
	demo d1(30,40);
	d1.show();

	demo d2(d1);
	d2.show();


	getch();
}