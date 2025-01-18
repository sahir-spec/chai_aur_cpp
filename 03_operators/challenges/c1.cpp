// C1: Arithemetic Operators
// Write a program that calculates the price of tea pack. A user enters the number of tea packs they want, and the price per  pack. Apply a 10% tax to the total price and display the final cost

#include <iostream>
using namespace std;

int main() {
    int cups;
    double priceOfCups, totalPrice, discountedPrice;

    cout<<"Enter the number of tea Cups";
    cin>>cups;
    cout<<"Enter the price per cups";
    cin>>priceOfCups;

    totalPrice = (cups * priceOfCups) + 0.1;
    cout<<"The price of tea Pack after Applying tax: "<<totalPrice;

    return 0;
}