#include<iostream.h>
#include<conio.h>
class Fybca
{
	private:
		int fees;

	public:
		Fybca()
		{
			fees=30000;
		}
		void display()
		{
			cout<<"The Fees of Student is =>"<<fees<<endl;
		}
};

class Student : public Fybca
{
	private:
		int roll_no;

	public:
		void set_rollno(int x)
		{
			x=roll_no;
		}
		void display1()
		{
			cout<<"The Roll No is =>"<<roll_no<<endl;
		    //	cout<<"The Name of the student is =>"<<name<<endl;
		}
};

void main()
{
	clrscr();
	Student rohit;
	rohit.display();
	rohit.set_rollno(16);
	rohit.display1();
	getch();
}
