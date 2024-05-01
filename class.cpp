/*Define a class named Movie.
Include private fields for
the title, year, and name of the director.
Include three public non inline functions with
setTitle,setYear,SetDirector
display all the information .*/

#include<iostream>
using namespace std;
class movie
{
	private:
		char name[30];
		int year;
		char director[30];
	public:
		void setTitle();
		void setYear();
		void setDirector();
		void display ()
		{
			cout<<"\nname: "<<name<<"\nyear: "<<year<<"\ndirector: "<<director;
		}
		};
	void movie::setTitle()
	{
	cin>>name;	
	}	
	void movie::setYear()
	{
	cin>>year;
	}
	void movie::setDirector()
	{
	cin>>director;
	}	

main()
{
	movie m1;
	m1.setTitle();
	m1.setYear();
	m1.setDirector();
	m1.display();
}

