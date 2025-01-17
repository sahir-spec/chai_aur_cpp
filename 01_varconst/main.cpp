#include <iostream>
using namespace std;

int main() {
    int score;
    score = 110;

    const int uid = 232323;
    // uid = 515; it give s error because it define as constant, which should not be change if defined

    int balance =  500;
    balance = 1000;
    cout<<score<<" "<<balance<<endl;
    return 0;
}