#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // default constructor 
    Chai() {
        teaName = "Unknown Tea";
        serving = 1;
        ingredients = {"Water", "Tea", "Leaves"};
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
    Chai c1;
    c1.displayChaiDetails();
    return 0;
}