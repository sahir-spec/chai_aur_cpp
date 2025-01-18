// C4: Bitwise Operators
// Write a program that users bitwise AND(&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availablity by inputting the tea type (1, 2, or 4) and display a message saying whether that tea is in stock or not.

#include <iostream>
using namespace std;

int main() {
    const int GREEN_TEA = 1; 
    const int BLACK_TEA = 2; 
    const int OOLONG_TEA = 4; 
    int stock = GREEN_TEA | OOLONG_TEA; 

    int teaType;
    cout << "Enter the tea type to check (1 for Green, 2 for Black, 4 for Oolong): ";
    cin >> teaType;

    if (stock & teaType) {
        cout << "Tea type " << teaType << " is in stock." << endl;
    } else {
        cout << "Tea type " << teaType << " is not in stock." << endl;
    }

    return 0;
}
