#include<iostream>
using namespace std;
class demo
{
	int x,y,z;
	public:
		demo(int a,int b, int c)
		{
			a=x;
			b=y;
			c=z;
		}
		demo()
		{
			x=20;
			y=60;
			z=50;
		}
		void operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
		void show()
		{
			cout<<"\nx:"<<x<<"\ny:"<<y<<"\nz:"<<z;
		}
};
main()
{
	demo d1(2,3,4),d2;
	-d1;
	d1.show();
	-d2;
	d2.show();
}
