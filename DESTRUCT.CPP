 //program to demonstrate destructor
#include<iostream.h>
#include<conio.h>
class Demo
{
	public:
		Demo();    //constructor function
		~Demo();   //destructor  function
};
Demo::Demo()
{
	cout<<"constructor called"<<endl;
}
Demo::~Demo()
{
	cout<<"Destructor called"<<endl;
}
void main()
{
	clrscr();

	Demo D;
	getch();
}