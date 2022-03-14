#include<iostream.h>
#include<conio.h>
class fibo
{
	int a,b,c,i,x;
	public:
		void get()
		{
			cout<<"\nEnter no:\t";
			cin>>x;
		}
		void cal()
		{
			b=1;a=0;
			cout<<"\nThe fibo series:"<<b;
			for(i=2;i<=x;i++)
			{
				c=a+b;
				cout<<"\n\t"<<c;
				a=b;
				b=c;
				c=a;
			}
		}
	};
void main()
{
	clrscr();
	fibo f1;
	f1.get();
	f1.cal();
	getch();
}