#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai  {
    private: 
        string teaName;
        int serving;

    public: 
        Chai(string name, int serve): teaName(name), serving(serve) {}

        void display() const {
            cout<<"tea name: "<< teaName <<endl;
        }
};

int main() {
    Chai  masalaChai("Masala Chai", 4);
    Chai  gingerChai("Ginger Chai", 8);

    masalaChai.display();
    gingerChai.display();

    
    return 0;
}