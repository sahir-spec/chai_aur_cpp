#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string* teaName;
    int serving;
    vector<string> ingredients;

    // parameter constructor 
    Chai(string name, int serve, vector<string> ingr) {
        teaName = new string(name);
        serving = serve;
        ingredients = ingr;
    }

    // copy construcutor
    Chai(const Chai &other) {
        teaName = new string(*other.teaName);
        serving = other.serving;
        ingredients = other.ingredients;
    }

    ~Chai() {
        delete teaName;
        cout<<"destructor Called";
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << *teaName << endl
             << "Serving: " << serving << endl
             << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai lemon("Lemon Tea", 2, {"Water", "Tea Leaf", "Honey"});
    lemon.displayChaiDetails();

    Chai copiedChai = lemon;
    // copiedChai.displayChaiDetails();

    *lemon.teaName = "Modified Lemon Tea";
    cout<<"Lemon Tea ------"<<endl;
    lemon.displayChaiDetails();

    cout<<"Copied Tea -----"<<endl;
    copiedChai.displayChaiDetails();
    return 0;
}