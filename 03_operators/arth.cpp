#include <iostream>
using namespace std;

int main() {
    int cups;
    double priceOfCups, totalPrice, discountedPrice;

    cout<<"Enter the number of tea Cups";
    cin>>cups;
    cout<<"Enter the price per cups";
    cin>>priceOfCups;

    totalPrice = cups * priceOfCups;

    // apply 5% discount if total price is above 100
    if(totalPrice > 100) {
        totalPrice = totalPrice - (totalPrice * 0.05);
        cout<<"Discounted Price is "<<discountedPrice<<endl;
    } else {
        cout<<"Total Price is "<<totalPrice<<endl;
    }

    return 0;
}