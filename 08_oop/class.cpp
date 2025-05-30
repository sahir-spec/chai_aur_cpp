#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

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
    c1.teaName = "Lemon Tea";
    c1.serving = 3;
    c1.ingredients = {"Water", "lemon","tea", "Sugar"};
    c1.displayChaiDetails();
    return 0;
}