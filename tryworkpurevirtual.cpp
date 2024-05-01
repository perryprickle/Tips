//Imagine a publishing company that markets both book and 
// audiocassette versions of its 
//works. Create a class publication that stores the title 
// (a string) and price (type float) 
//of a publication.  
//From this class derive two classes: book, which adds a page count (type 
//int), and tape, which adds a playing time in minutes (type float). 
// Each of these three 
//classes should have a getdata() function to get its 
// data from the user at the keyboard, 
//and a putdata() function to display its data. 
//getdata()and putdata must be pure virtual function in base class. 
//Write a main() program to test the book and tape classes by creating instances of them, 
//asking the user to fill in data with getdata(), and then displaying the data with putdata().

#include <iostream>
#include <string>

using namespace std;

class publication
 {
protected:
    string title;
    float price;

public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class book : public publication
 {
private:
    int page;

public:
    void getdata() 
	 {
	 	cout << "\nenter the book title:";
        cin >> title;
        cout << "\nnumber of pages:";
        cin >> page;
        
    }

    void putdata() 
	 {
        cout << "page: " << page << endl;
        cout << "book title: " << title << endl;
    }
};

class tape : public publication
 {
private:
    float playing_time;

public:
    void getdata() 
	 {
        cout << "\nenter the playing_time in min:";
        cin >> playing_time;
        cout << "\nenter the tape title:";
        cin >> title;
    }

    void putdata() 
	 {
        cout << "playing_time: " << playing_time << endl;
        cout << "tape title: " << title << endl;
    }
};

int main()
 {
    book b;
    cout << "\nenter the details of book:";
    b.getdata();
    cout << "\nbook details:";
    b.putdata();

    tape t;
    cout << "\nenter the details of tape:";
    t.getdata();
    cout << "\ntape details:";
    t.putdata();

    return 0;
}

