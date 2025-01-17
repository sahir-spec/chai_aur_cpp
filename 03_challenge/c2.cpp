// C2
// Modify Tea Prices Create a Program where the user inputs a base price of tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting

#include <iostream>
using namespace std;

int main()
{

    float price;
    cout<<"Enter Price of Tea"<<endl;
    cin>>price;
    cout<<"Before Increasing 10%. of its rate "<<price<<endl;
    int newPrice = (int)price + 10;
    cout << "New Price After Increasing 10%. is " << newPrice << endl;
    return 0;
}