#include <iostream>
using namespace std;

int main() {
    int curHrs;
    cout<<"Enter Hours to Check the shop is open or closed (0 - 23): ";
    cin>>curHrs;

    if(curHrs >= 8 && curHrs <= 18) {
        cout<<"The Shop is open!"<<endl;
    } else {
        cout<<"The Shop is Closed!"<<endl;
    }

    return 0;
}