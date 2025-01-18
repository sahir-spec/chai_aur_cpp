#include <iostream>
using namespace std;

int main() {
    bool isStudent;
    int cups;

    cout<<"Are you a student(1 for yes and 0 for no)?";
    cin>>isStudent;

    cout<<"How many cups of tea have you purchased?";
    cin>>cups;

    if(isStudent || cups > 15) {
        cout<<"you are elegible for a discount "<<endl;
    } else {
        cout<<"you are not elegible for a discount "<<endl;
    }

    return 0;
}