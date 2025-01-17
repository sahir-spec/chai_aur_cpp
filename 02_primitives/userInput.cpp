#include <iostream>
#include <string>
using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    cout<<"What would you like to order id tea? \n";
    getline(cin, userTea);

    cout<<"how many cups of " << userTea << " would you like to have? \n";
    cin>> teaQuantity;

    cout << "Tea Name: " << userTea << endl;
    cout << "Tea Quantity: " << teaQuantity << endl;

    return 0;
}