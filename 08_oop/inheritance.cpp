#include <iostream>
#include <string>
#include <vector>
using namespace std;

// base/main/parent/inherited/original class
class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea Constructor Called" << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method" << endl;
    }

    virtual void serve() const
    {
        cout << "Serving " << servings << " cup of tea with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea Destructor called for" << teaName << endl;
    }
};

class GreenTea: public Tea {
    public:
        GreenTea(int serve): Tea("Green Tea", serve){
            cout<<"Green Tea constructor called"<<endl;
        }

        void brew() const override {
            cout<<"Brewing "<< teaName << "by steeping green tea leaves"<<endl;
        }

        void serve() const override {
            cout<<"Serving "<< teaName <<endl;
        }

        ~GreenTea() {
            cout<<"Green Tea Constuctor called"<<endl;
        }
};

class MasalaTea: public Tea {
    public:
        MasalaTea(int serve): Tea("Masala Tea", serve){
            cout<<"Green Tea constructor called"<<endl;
        }

        void brew() const override final {
            cout<<"Brewing "<< teaName << "by steeping green tea leaves"<<endl;
        }

        void serve() const override {
            cout<<"Serving "<< teaName <<endl;
        }

        ~MasalaTea() {
            cout<<"Masala Tea Constuctor called"<<endl;
        }
};

// class spicyMasalaTea: public MasalaTea {
//     public:
//         void brew() const override {
//             cout<<"Brewing "<< teaName << "by steeping green tea leaves"<<endl;
//         }
// };

int main()
{
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
}