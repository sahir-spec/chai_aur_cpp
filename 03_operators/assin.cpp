#include <iostream>
using namespace std;

int main()
{
    int teaBags;
    cout << "Enter The Number of Tea Bags You have: ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        teaBags += 5;
    }
    cout << "The Tea Bags You have " << teaBags << endl;

    return 0;
}