#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class count
{
	char name [25];
	int i,space,vowel,n,l;
	public:
		void get();
		void call();
};
	void count::get()
	{
		cout<<"enter string to cout length spaceand vowel\n\t";

		gets(name);
	};
	void count::call()
	{	vowel=0;
		space=0;
		n=0;
		l=strlen(name);
		for(i=0;i<l;i++)
		{
			switch (name[i])
			{
				case'i':vowel++;
				break;
				case'o':vowel++;
				break;
				case'e':vowel++;
				break;
				case'a':vowel++;
				break;
				case'u':vowel++;
				break;
				default:n++;
			}
		}
			cout<<"\n vowel in seantance are"<<vowel;
			cout<<"\n space in seantance are"<<space;
			cout<<"\n consonts in seantance are"<<n;
			cout<<"\n length in seantance are"<<l;
		}
		void main()
		{
		clrscr();
		count c;
		c.get();
		c.call();
		getch();
		}