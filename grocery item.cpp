#include <iostream>

using namespace std;

class GroceryItem
 {
private:
    int stockNumber,price,quantityInStock, totalValue;

    void set_StockNumber()
	 {
        cout << "Enter stock number: ";
        cin >> stockNumber;
    }

    void set_Price() 
	{
        cout << "Enter price: ";
        cin >> price;
    }

    void set_QuantityInStock()
	 {
        cout << "Enter quantity in stock: ";
        cin >> quantityInStock;
    }

    void calculateTotalValue()
	 {
        totalValue = price * quantityInStock;
    }

public:
    void dataEntry()
	 {
        set_StockNumber();
        set_Price();
        set_QuantityInStock();
        calculateTotalValue();
    }

    void display() {
        cout << "Stock Number: " << stockNumber << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
        cout << "Total Value: $" << totalValue << endl;
    }
};

int main() 
{
    GroceryItem item;

    item.dataEntry();
    item.display();

    return 0;
}

