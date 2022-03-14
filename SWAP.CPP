#include<iostream.h>
#include<conio.h>
class swap{
	int num1,num2,temp;

public:
void input()
{
	cout<<"Enter Two Number : ";
	cin>>num1>>num2;
}
void logic()
{
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After swapping :\n"<<num1<<endl<<num2;
}
};
void main()
{
	clrscr();
	swap s;
	s.input();
	s.logic();
getch();

}