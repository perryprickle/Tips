//You are given a base class Shape which has two integer data members: width and height.
// You need to create two derived classes: Rectangle and Triangle, such that:
//Rectangle class should inherit from Shape.
//Triangle class should inherit from Rectangle.
//You need to implement appropriate constructors for each class and override the area() method in both Rectangle and Triangle 
//classes to calculate the area of a rectangle and a triangle respectively.
//Input Format
//The input consists of two integers separated by space representing the width and height of the shape.
//Output Format
//Print the area of the corresponding shape.
//Sample Input
//4 5
//Sample Output
//20
//Explanation
//For the given input, a rectangle with width 4 and height 5 is formed. The area of this rectangle is 4 * 5 = 20.
//Constraints
//1
//=
//width
//,
//height
//=
//1000
//1=width,height=1000
//This problem assesses the understanding of multilevel inheritance, constructors, and method overriding in C++.
#include<iostream>
using namespace std;
class Shape 
{
protected:
    int width;
    int height;
public:
    Shape(int w, int h) : width(w), height(h) {}
};
class Rectangle : public Shape
 {
public:
    Rectangle(int w, int h) : Shape(w, h) {}
    int area() {
        return width * height;
    }
};

class Triangle : public Rectangle 
{
public:
    Triangle(int w, int h) : Rectangle(w, h) {}
    int area() {
        return (width * height) / 2;
    }
};

int main() 
{
    int w, h;
    cin >> w >> h;

    Rectangle rectangle(w, h);
    Triangle triangle(w, h);
    cout << "Area of rectangle: " << rectangle.area() << endl;
    cout << "Area of triangle: " << triangle.area() << endl;

    return 0;
}

