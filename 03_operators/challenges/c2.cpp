// C2 : Assignment Operators
// Create a program where the user inputs the number of tea bags they have.if the number is less than 20,
// give them 10 extra bags using the += assignment operator.Display the updated total

#include <iostream>
using namespace std;

int main()
{
    int teaBags;
    cout << "Enter The Number of Tea Bags You have: ";
    cin >> teaBags;

    if (teaBags < 20)
    {
        teaBags += 10;
    }
    cout << "The Tea Bags You have is" << teaBags << endl;

    return 0;
}