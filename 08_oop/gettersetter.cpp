#include <iostream>
#include <vector>
using namespace std;

class Chai {
    private: 
        string teaName;
        int serving;
        vector<string> ingredients;

    public: 
        Chai() {
            teaName = "Unknown Tea";
            serving = 1;
            ingredients = {"Water", "Tea Leaves"};
        }

        Chai(string name, int serve, vector<string> ingr) {
            teaName = name;
            serving = serve;
            ingredients = ingr;
        }

        // getter
        string getName() {
            return teaName;
        }

        // setter
        void setName(string name) {
            teaName = name;
        }

        // getter
        int getServing() {
            return serving;
        }

        // setter
        void setServing(int serve) {
            serving = serve;
        }

        // getter
        vector<string> getIngredients() {
            return ingredients;
        }

        // setter
        vector<string> getIngredients(vector<string> ingr) {
            return ingredients = ingr;
        }

        void displayChaiDetails() {
            cout<<"Tea Name: "<<teaName<<endl;
            cout<<"Servings: "<<serving<<endl;
            cout<<"Ingredients: ";
            for (string ingredient: ingredients)
            {
                cout<<ingredient<<" ";
            }
            cout<<endl;
        }
};

int main() {
    Chai chai;
    chai.setName("Ginger Tea");
    chai.getName();
    chai.setServing(1);
    chai.getServing();
    chai.getIngredients({"Water", "Tea Leaves"});
    chai.getIngredients();
    
    chai.displayChaiDetails();
    return 0;
}