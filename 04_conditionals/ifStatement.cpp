#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaOrder;
    cout<< "Enter your tea order";
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea") {
        cout<< "You are ordered Green Tea"<<endl;
    } 

    return 0;
}