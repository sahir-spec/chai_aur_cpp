#include <iostream>
using namespace std;

int main()
{
    string teaTypes[3] = {"Green Tea", "Black Tea", "Lemon Tea"};

    for (int i = 0; i < 3; i++)
    {
        if (teaTypes[i] == "Green Tea")
        {
            continue;
        }

        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }

    return 0;
}