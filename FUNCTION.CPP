#include<iostream.h>
#include<conio.h>
class swapdata
{
	public:
		void swap(int x,int y)
		{
			int t;
			t=x;
			x=y;
			y=t;
			cout<<"\n after swapping:"<<x<<"\t"<<y;
		}
		void swap(char x,char y)
		{
			char t;
			t=x;
			x=y;
			y=t;
			cout<<"\n after swappin:\n"<<x<<y;
		}
		};
		void main()
		{
			int a,b;
			char p,q;
			swapdata INT;
			cout<<"\n before swapping:\n"<<a<<"\t"<<b<<"\t"<<p<<"\t"<<q;
			INT.swap(a,b);
			INT.swap(p,q);
			getch();
		}
