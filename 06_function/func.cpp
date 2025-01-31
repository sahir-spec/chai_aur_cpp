#include <iostream>
using namespace std;

// function defination
int checkTemp(int temp) {
    return temp;
}

// decleration of function
void serveChai(int cups);

int main() {
    int temp = checkTemp(50);
    cout<<temp<<endl;
    // function call
    serveChai(3);
    return 0;
}

// function defination
void serveChai(int cups) {
    cout<<"Serving "<<cups<<endl;
}

// syntax 
// returnType functionName(parameters) {
// body
// }