Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 100/- 
 toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps 
 track of the number of cars that have gone by, and of the total amount of money collected. 
  Model this tollbooth with a class called tollBooth. The two data items are a type 
  int to hold the total number of cars, and a type double to hold the total amount 
 of money collected. A constructor initializes both of these to 0. A member function called 
 payingCar() increments the car total and adds 100/- to the cash total. Another function, 
 called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a 
 member function called display() displays the two totals. Make appropriate member 
 functions const.
 
 #include<iostream>
 using namspace std;
 class tollbooth
 {
 	int number of cars;
 	double total amount;
 	public:
 		tollbooth()
 		{
		 number of cars=0;
		 total amount=0;
		 	
	    }
	    void payingcar()
	    {
	    	cash total=number of cars +100;
	    	number of cars++;
		}
		void nopaycar()
		{
			number of cars++;
		}
		void display()
		{
			cout<<"number of cars"<<number of cars;
			cout<<"cash total"<<cash total;
		}
 };
 main()
 {
 	tollbooth t1;
 	t1.payingcar();
 	t1.nopaycar();
 	t1.tollbooth()
 	t1.display();
 }
