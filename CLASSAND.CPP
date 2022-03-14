//program to demostrate class
#include<iostream.h>
#include<conio.h>
class student
{
	public: //access specifier
	int rollno;
	char name[20]; //data memebers

	void display()
	{
		cout<<"Inside class";

	};
};
void main()
{
	student s;
	clrscr();
	cout<<"Enter Rollno:"<<endl;
	cin>>s.rollno;
	cout<<"Enter Name:"<<endl;
	cin>>s.name;
	cout<<"******OUTPUT*******\n";
	cout<<"Student rollno is:"<<s.rollno<<endl;
	cout<<"Student name is:"<<s.name<<endl;
	s.display();
	getch();
}