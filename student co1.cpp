//create a class student having datamember as reg_no and cgpa
//inititalise the values using parameterised const
//and create three objects by taking values from user.
//third object must have same values as 2nd object
#include<iostream>
using namespace std;
class student
{
	int reg_no;
	double cgpa;
	public:
		student(int r,double c)
		{
			reg_no=r;
			cgpa=c;
		}
		student(student &s)
		{
			reg_no=s.reg_no;
			cgpa=s.cgpa;
		}
		void display()
		{
			cout<<"\reg_no= "<<reg_no<<endl;
			cout<<"\ncgpa= "<<cgpa<<endl;
		}
};
main()
{
	student s1(1101,7.8);
	student s2(1102,6.7);
	student s4(s2);
	s1.display();
	s2.display();
	s4.display();
}
