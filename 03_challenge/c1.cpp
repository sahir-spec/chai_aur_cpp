// C1
// Tea information Display write a program that declares variables to store the type of tea, its price per kilogram(float), and its rating(char). Use datatypes effectively and print them in a formated output using escape sequences.

#include <iostream>
using namespace std;

int main() {
    string typeOfTea = "Lemon Tea";
    float price = 512;
    int rating = 4;

    cout<<"Tea Name: "<<typeOfTea<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Rating (out of 5): "<<rating<<endl;

    return 0;
}
