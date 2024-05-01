/*Create a base class called shape.Use this class to store
two double type values that could be used to compute the 
area of figures.Derive 2 specific classes called triangle 
and rectangle from the base shape. 
Add to the base class, a member function get data() to 
initialize base class data members and member function 
display_area() to compute and display the area of figures. 
Make display_areal) as a virtual function and redefine 
this function in the sub classes to suit their requirements.
Using these three classes, design a program that will 
accept dimensions ofa triangle . or a rectangle 
interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and as base and height in the case of triangles, and used follows
Area of rectangle=x*y
Area of triangles =1/2 *x*y*/
#include<iostream>
using namespace std;
class Shape
{
	public:
		int x,y;
		void getdata()
		{
			cout<<"\nEnter the two values";
			cin>>x>>y;
		}
		virtual void display_area()
		{
			cout<<"shape class";
		}
};
class triangle:public Shape
{
	public:
		void display_area()
		{double a;
		a=0.5*x*y;
			cout<<"\nArea of Triangle is"<<a;
		}
};
class Rectangle:public Shape
{
	public:
		void display_area()
		{
			int a=x*y;
			cout<<"\nArea of Rectangle is "<<a;
		}
};
main()
{
	Shape *s;
	triangle t;
	Rectangle r;
	
	s=&t;
	s->getdata();
	s->display_area();
	s=&r;
	s->getdata();
	s->display_area();
}
