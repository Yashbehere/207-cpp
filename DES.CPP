#include<iostream.h>
#include<conio.h>
class demo
{
   int x;
   public:
    demo() //default
    {
      cout<<"\tThe constructor with no. parameter";
    }
    demo(int a) //parameterized
    {
      x=a;
      cout<<"\n\tconstructor with one parameter x="<<x;
      cout<<"\n\tsquare of x is"<<x*x;
    }
    demo(demo &d) //copy
    {
      cout<<"\n\tcopy of constructor is x="<<d.x;
      x=d.x;
      cout<<"\n\tThe copied constructor is"<<x;
    }
    ~demo()
    {
      cout<<"\n\tdestructor is invoke\n";
    }
   };
   void main()
   {
      clrscr();
      demo d1;
      demo d2(30);
      demo d5(d2);
      getch();
   }
