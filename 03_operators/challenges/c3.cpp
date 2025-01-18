// C3: Relational & Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discounted based on their input

#include <iostream>
using namespace std;

int main()
{
    bool isSubscription;
    int subYrs, buyCups;

    cout << "Are You Have Subscription (1 for Yes or 0 for No)";
    cin >> isSubscription;

    if (isSubscription == true)
    {
        cout << "How Many Years of Subscription You Have: ";
        cin >> subYrs;

        if (subYrs > 1)
        {
            cout << "You Are qualifies for discount" << endl;
        } else {
            cout << "You Are not qualifies for discount" << endl;
        }
    }
    else
    {
        cout << "How many cups You buy: ";
        cin >> buyCups;

        if (buyCups > 12)
        {
            cout << "You Are qualifies for discount" << endl;
        } else {
            cout << "You Are not qualifies for discount" << endl;
        }
    }

    return 0;
}