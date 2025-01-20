#include <iostream>
using namespace std;

int main()
{
    int buyCups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter Cups to Buys: ";
    cin >> buyCups;

    totalPrice = pricePerCup * buyCups;

    if (buyCups > 20)
    {
        discount = totalPrice - 0.2;
        cout<<"You got Discount of 20%!"<<endl 
            <<"The Price is Now "<<discount<<endl;
    }
    else if (buyCups >= 10 && buyCups <= 20)
    {
        discount = totalPrice - 0.1;
        cout<<"You got Discount of 10%!"<<endl 
            <<"The Price is Now "<< discount<<endl;
    } else {
        cout<<"The Price is "<<totalPrice<<endl;
    }
    return 0;
}