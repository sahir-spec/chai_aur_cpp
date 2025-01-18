#include <iostream>
using namespace std;

int main() {
    int buyCup;

    cout<<"How Many Cups you Buy: ";
    cin>>buyCup;

    if(buyCup > 20) {
        cout<<"Congratulation! You got Gold Badge"<<endl;
    } else if(buyCup >= 10 && buyCup <= 20) {
        cout<<"Congratulation! You got Silver Badge"<<endl;
    } else {
        cout<<"Ops! Try to get a badge next time";
    }

    return 0;
}