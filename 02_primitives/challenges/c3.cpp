// C3
// Favorite Tea Input Write a program that takes the user's favorite tea using getline and also asks how many cup of tea they want using cin. Display the result in a fun message

#include <iostream>
using namespace std;

int main() {
    string favTea;
    int QuanTea;

    cout<<"Enter Your Favorite Tea: ";
    getline(cin, favTea);
    cout<<"Enter Quantitiy of Tea: ";
    cin>>QuanTea;

    cout<<"Your Order -->"<<endl
        <<"Your Favorite Tea: "<< favTea<<endl
        <<"Tea Quantity: "<<QuanTea<<endl;

    return 0;
}