//write a program to declare an array of size 10 and enter the values and ask the user the index number,
//whose value it wants to check and throw the exception if the index number is outside the range of array

#include <iostream>
#include <stdexcept>

using namespace std;

int main() 
 {
  int arr[10];
  cout << "Enter 10 values for the array:";
  for (int i = 0; i < 10; i++) 
  {
    cin >> arr[i];
  }

  int index;
  cout << "Enter the index you want to check (0-9): ";
  cin >> index;
  if (index < 0 || index >= 10)
   {
    throw out_of_range("Index is out of range!");
  }
  cout << "The value at index " << index << " is: " << arr[index];

  return 0;
}


