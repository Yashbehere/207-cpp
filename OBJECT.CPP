#include<iostream.h>
#include<conio.h>
class student
{
public:

	 char name[20];
	 int rollno;

 void display()
	 {
	 cout<<"inside class";
	 }
};
void main()
{
	student s;
	s.display();

	clrscr();
	cout<<"enter name"<<endl;
	cin>>s.name;

	cout<<"enter roll no"<<endl;
	cin>>s.rollno;

	cout<<"name is"<<s.name<<endl;
	cout<<"rollno is"<<s.rollno<<endl;

getch();
}
