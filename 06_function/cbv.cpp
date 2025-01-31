#include <iostream>
using namespace std;

void pourChai(int cups) {
    cups = cups + 5;
    cout<<"Poured Cups: "<<cups<<endl;
}

int main() {
    int chaiCups = 2;
    pourChai(chaiCups);
    cout<<"Total Cups are "<<chaiCups<<endl;

    return 0;
}