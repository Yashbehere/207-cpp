//program to demostrate class and object\
#include<iostream.h>
#include<conio.h>
class customer
{
	private:
		int no;
		char name[20];
		char gender;
	public:
		void get();
		void put();
};

void customer::get()
{
	cout<<"Enter Customer Number";
	cin>>name;
	cout<<"Enter Customer name";
	cin>>salary;
	cout<<"Enter Gender";
	cin>>gender;
}
void customer::put()
{
	cout<<no<<"\t\t"<<name<<"\t\t"<<gender;
}
void main()
{
	clrscr();
	customer s1,s2;
	s1.get();
	cin>>
	s2.get();
	cout<<"*****************************************"<<endl;
	s1.put();
	s2.put();
}