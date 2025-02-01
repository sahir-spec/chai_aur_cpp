#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // parameter constructor 
    Chai(string name, int serve, vector<string> ingr) {
        teaName = name;
        serving = serve;
        ingredients = ingr;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl
             << "Serving: " << serving << endl
             << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Chai lemon("Lemon Tea", 2, {"Water", "Tea Leaf", "Honey"});
    lemon.displayChaiDetails();
    return 0;
}