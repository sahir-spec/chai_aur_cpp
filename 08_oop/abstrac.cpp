#include <iostream>
using namespace std;

class Tea {
    public: 
        virtual void prepIngr() = 0; // pure virtual function
        virtual void brew() = 0; // pure virtual function
        virtual void serve() = 0; // pure virtual function

        void makeChai( ) {
            prepIngr();
            brew();
            serve();
        }
};

class GreenTea : public Tea {
    public:
        void prepIngr() override {
            cout<<"Green Leaves and water is ready"<<endl;
        }
        void brew() override {
            cout<<"Green Tea Brewed"<<endl;
        }
        void serve() override {
            cout<<"Green Served"<<endl;
        }
};

class MasalaTea : public Tea {
    public:
        void prepIngr() override {
            cout<<"Masala Leaves and water is ready"<<endl;
        }
        void brew() override {
            cout<<"Masala Tea Brewed"<<endl;
        }
        void serve() override {
            cout<<"Masala Served"<<endl;
        }
};

int main() {
    GreenTea gTea;
    MasalaTea mTea;

    gTea.makeChai();
    mTea.makeChai();

    return 0;
}