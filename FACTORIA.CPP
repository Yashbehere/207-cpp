#include<iostream.h>
#include<conio.h>
class fact
{
	int i,x;
	public:
		void get()
	{
		cout<"enter the number";
		cin>>x;
	}
		void cal()
	{
		long int f=1;
		for(i=1;i<=x;i++)

	     {
		f=f*i;

	     }
	     cout<<"factorial no is"<<f;
	}
};
	void main()
	{
	clrscr();
	fact f1;
	f1.get();
	f1.cal();
	getch();
	}
